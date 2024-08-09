#include<iostream>
using namespace std;
 struct node

 {
     int data;
      struct  node *left;
      struct node *right;


 };

 struct node *createnode(int data)
 {
    struct node *n;
    n=new struct node;

    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
 }

 void preorder(struct node *root)

 {
    if(root!=NULL)
    {
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);

    }   
 }

 /*void isBST (struct node *root)
{if(root!=NULL)
{


 
}
else
{

}*/

bool isBST(struct  node* root){   // TO CKECH WHETHER ITS BST OR NOT/////
    static struct node *prev = NULL;
    cout<<true<<endl;
    if(root!=NULL){
        if(!isBST(root->left)){
            cout<<root->data<<endl;
            return false;
        }
        if(prev!=NULL && root->data <= prev->data){
            cout<<root->data<<endl;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return true;
    }
}

struct node *search(struct node *root,int key)///SEARCH FUNCTION/////RECURSIVE

{
    if(root==NULL)
    {
        return NULL;
    }
     if(key==root->data)
     {
         return root;
     }
     else if(key>root->data)
     {
        return  search(root->right,key);

     }
     else
     {
         return search(root->left,key);
     }

}
struct node *inorderPredecessor(struct node *root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct node *deletenode (struct node *root,int value)

{struct node *inpre;
if(root==NULL)
{
    return NULL;
}
if(root->left==NULL&&root->right==NULL)
{
    free(root);
    return NULL;
}
 if(value<root->data)
 {
    root->left=deletenode (root->left,value);

 }  
 else if(value>root->data)
 {
root->right=deletenode(root->right,value);
 }  
 else
 {
    inpre=inorderPredecessor(root);
    root->data=inpre->data;
   root->left=deletenode(root->left,inpre->data);

 }
 return root;

}
void inorder(struct node *root)
{if(root!=NULL)
{


     inorder(root->left);
     cout<<root->data<<endl;
     inorder(root->right);
}
}
 void postorder(struct node *root)
 {
     if(root!=NULL)
     {
         postorder(root->left);
         postorder(root->right);
         cout<<root->data;
     }
 }

  node *searchiter( node *root,int key)///SEARCH ITERATIVE FUNCTION////////
 {
     while(root!=NULL)
     {if(key==root->data)
     {
         return root;
     }
     else if(key>root->data)
     {
          root=root->right;

     }
     else
     {
          root=root->left;
     }
    
     }
     return NULL;
   
 }
 void insert(struct node *root, int key)
 {
     struct node *prev=NULL;
     while(root!=NULL)
     {
        prev=root;
        if(key==root->data)
        {cout<<"Cannot insert "<<key <<"already in BST"<<endl;
            return;
        }
        else if(key<root->data)
        {
             root=root->left;

        }
        else{
              root=root->right;
        }

     }

     struct node *newnode=createnode(key);
     if(key<prev->data)
     {
        prev->left=newnode;

     }
     else{
        prev->right=newnode;
     }
 }
int main()
{
     struct node *p=createnode(5);
     
     //struct node *p1=createnode(3);

     //struct node *p2=createnode(6);//

/*truct node *p3=createnode(1);
struct node *p4= createnode(4);

 p->left=p1;
     p->right=p2;

     p1->left=p3;
     p1->right=p4;*/


insert(p,55);
node *search=searchiter(p,44);
inorder(p);
}


/*inorder(p);
if(n!=NULL)
{
    cout<<"Found"<<n->data;

}
else
{
     cout<<"Element not found";
}
}*/
