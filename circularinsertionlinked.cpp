#include<iostream>
using namespace std;
class node 
{public:
     int data;
     node *next;

node(int data)
{
     this->data=data;

}
};

node * insertattail(node *head,int data)

{
node *p=head;
while(p->next!=head)
{
    p=p->next; 
}
node *ptr=new node(data);

p->next=ptr;
ptr->next=head;
}

node *insertathead(node *head,int data)
{node *p=head;
node *q=head;
     node *ptr=new node(data);
    while(p->next!=head)
    {
         p=p->next;
    }

    ptr->next=q;
    head=ptr;
    p->next=head;
    return head;
}

void linkedListTraversal(node *head){
     node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

int main()
{
    node *head=new node(10);
    node *second=new node(20);

   head->next=second;
   second->next=head;
/*insertattail(head,80);
insertattail(head,80);
linkedListTraversal(head);*/
head=insertathead(head,7);
linkedListTraversal(head);
head=insertattail(head,9);
linkedListTraversal(head);


}
