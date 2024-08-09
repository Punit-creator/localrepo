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

void listtraversal(node *head)
{
    node*ptr=head;

     while(ptr!=NULL)
     {
         cout<<"element is:-"<<ptr->data;
         ptr=ptr->next;
     }
}


node *insertatfirst(node *head,int data)
{
     node *ptr=new node(data);
     
     ptr->next=head;
     head->prev=ptr;
     head=ptr;
    return head;
}

node *insertafternode(node *head,node *previ,int data)
{
node *ptr=new node(data);
ptr->prev=previ;
ptr->next=previ->next;
previ->next=ptr;
return head;
}
node *insertatlast(node *head,int data)

{node *p=head;

   
      while(p->next!=NULL)
{
    p=p->next;

}

     node *ptr=new node(90);
   p->next=ptr;
   ptr->prev=p;
   ptr->next=NULL;
}
node*insertatindex(node*head,int data,int index)
{int i=0;

node *p=head;

    while(i!=index-1)
    {
         p=p->next;
         i++;

    }
    node *ptr=new node(data);
    
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=p;
}




int main()
{
     node *head=new node(10);

     node *second=new node(20);
      node *third=new node(40);



head->next=second;
head->prev=NULL;

second->prev=head;
second->next=third;

third->prev=second;
third->next=NULL;

/*head=insertatfirst(head,54);
head=insertatfirst(head,12);
listtraversal(head);
insertatlast(head,90);
listtraversal(head);*/
/*head=insertafternode(head,second,80);
listtraversal(head);*/

cout<<endl;

insertatindex(head,30,1);
listtraversal(head);
}