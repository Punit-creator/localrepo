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

node *deleteatindex(node*head,int index)
{
 
 
   node *p=head;
   node *q=head->next;

     int i=0;
     while(i!=index-1)
     {
         p=p->next;
         q=q->next;

     }
     p->next=q->next;
    q->next=NULL;
    free(q);

}

node*deleteatvalue(node *head,int val)
{
     node*p=head;
    node*q=head->next;

    while(q->data!=val&&q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    if(q->data==val)
    {
        p->next=q->next;
        free(q);
    }
}

node *deleteatfirst(node *head)
{
    node *ptr=head;
    head=head->next;
 free(ptr);
return head;
}
node*deleteatend(node*head)
{
    {
    
node*p=head;
     node *q=head->next;
     while(q->next!=NULL)
     {
        p=p->next;
         q=q->next;
     }
     p->next=NULL;
     free(q);
 } 
}

void linkedListTraversal( node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
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


/*
p=deleteatfirst(p);
linkedListTraversal(p);*/
/*deleteatend(p);
linkedListTraversal(p);*/
deleteatindex(p,1);
linkedListTraversal(p);
deleteatvalue(p,20);
linkedListTraversal(p);
}
 