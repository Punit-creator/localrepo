#include<iostream>
using namespace std;
class node
{
     public: node *prev;
     int data;
     node*next;

node(int data)
{
     this->prev=NULL;
     this->data=data;
     this->next=NULL;

}
};



node *deleteatfirst(node *head)
{
     node *ptr=head;
     head=head->next;
     free(ptr);
     return head;

}
void listtraversal(node *head)
{node *p=head;
     while(p!=NULL)
     {
        cout<<"element is"<<p->data<<endl;
         p=p->next;
     }
}

 node *deleteatend(node *head)
 {
node *p=head;
node *q=head->next;
    while(q->next!=NULL)
    {
         q=q->next;
         p=p->next;
    }

q->prev=NULL;
p->next=NULL;

free(q);
 }

 node *deleteatindex(node *head,int index)
 {int i=0;
     node *p=head;
     node *q=head->next;
     while(i!=index-1)
     {
         p=p->next;
         q=q->next;
         i++;

     }

p->next=q->next;
q->next=NULL;

q->prev=NULL;
free(q);    

 }

node *deleteatvalue(node *head,int val)
{
 node *p=head;
node *q=head->next;
    while(q->next!=NULL&&q->data!=val)
    {
         q=q->next;
         p=p->next;


    }

    if(q->data==val)
    {
         p->next=q->next;
         free(q);
    }
}
int main()
{
     node *head=new node(10);

     node *second=new node(20);
      node *third=new node(40);
node *four=new node (50);


head->next=second;
head->prev=NULL;

second->prev=head;
second->next=third;

third->prev=second;
third->next=four;

four->prev=third;
four->next=NULL;


/*head=insertatfirst(head,54);
head=insertatfirst(head,12);
listtraversal(head);
insertatlast(head,90);
listtraversal(head);*/
/*head=insertafternode(head,second,80);
listtraversal(head);*/


/*deleteatend(head);
listtraversal(head);
deleteatindex(head,1);
listtraversal(head);*/

deleteatvalue(head,20);
listtraversal(head);
}

