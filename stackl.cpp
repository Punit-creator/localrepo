#include<iostream>
using namespace std;
struct node *top=NULL;

struct node
{
     int data;
    
     struct node *next;
};


int isFull()
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
         return 1;

    }
    else 
    {
         return 0;
    }
}
struct node *push(int val)
{
     if(isFull())
     {
         cout<<"overflow";

     }
     else
     {
         struct node *n=(struct node*)malloc(sizeof(struct node));
         n->data=val;
       n->next=top;
       top=n;
       return top;
     }
}

int listtraversal()
{
     while(top!=NULL)
     {
         cout<<"the element in the queeue is"<<top->data<<endl;
         top=top->next;

     }
}

int isEmpty()
{
     if(top==NULL)
     {
         return 1;
     }
     else
     {
         return 0;
     }
}
int pop()
{
     if(isEmpty())
     {
         cout<<"underflow";
     }
     else
     {

    struct node *ptr=top;
    
         top=top->next;
         int x=ptr->data;

         free(ptr);
         return x;
     }
}
int main()
{
    push(30);
    push(10);
 push(80);

    listtraversal();




}