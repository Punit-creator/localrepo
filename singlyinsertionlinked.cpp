#include<iostream>
using namespace std;
class node
{
    public:int data;
    node  *next;
node(int data)
{
     this->data=data;
     this->next=NULL;
}


};

node *insertathead(node *head,int data)
{

     node *ptr=new node(data);
     ptr->next=head;
     head=ptr;
     return head;

}
 node * insertatend(node *head,int data)
 {
     node *ptr=new node(data);

     node *q=head;
     while(q->next!=NULL)
     {
         q=q->next;
     }
     q->next=ptr;
     ptr->next=NULL;
     return head;
 }
void linkedListTraversal( node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

node *insertafternode(node *head,node *prev,int data)
{
     node *ptr=new node (data);
     ptr->next=prev->next;
     prev->next=ptr;

     

}

node *insertatindex(node *head,int index,int data)
{
    
     node *ptr=new node (data);
     node *p=head;
   
     int i=0;
     while(i!=index-1)
     {
         p=p->next;

     }
     ptr->next=p->next;
     p->next=ptr;

}

int main()
{
 node *p=new node(10);
 
 node*p1=new node(20);

 node*p2=new node(30);

 p->next=p1;
 p1->next=p2;

p2->next=NULL;
 cout <<p->data;


 p=insertathead(p,5);
linkedListTraversal(p);

 insertatend(p,70);
 linkedListTraversal(p);

 insertafternode(p,p1,25);
 linkedListTraversal(p);
insertatindex(p,1,9);
 linkedListTraversal(p);

}
 