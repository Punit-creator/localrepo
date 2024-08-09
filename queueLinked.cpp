#include<iostream>
using namespace std;

struct node *r=NULL;
     struct node *f=NULL;

struct node
{
     int data;
     struct node *next;
};
void enqueu(int  val)
{
struct node *n=(struct node *)malloc(sizeof(struct node));
if(n==NULL)///////////////////////////If node if full the printing queue is Full////////
{
      cout<<"queue is full";
}
else{                      ////////////If the node  is not  full then vala logic////
      n->data=val;
      n->next=NULL;
      if(f==NULL)///////////////If the node is empty then assign f and r to new  node n made initially the front and rear is pointed to NULL/////
      {
           f=r=n;
      }
      else{//////////////////////iF THE NODE is half filled the vala logic/////
          r->next=n;
          r=n;
      }
}
     
}

int  dequeu()
{
int val=-1;
struct node *ptr=f;

if(f==NULL)/////////////// ////////////If node if empty /////     
{
      cout<<"queue is empty"<<endl;
}
else{                      ////////////If the node  filled then delete vala logic////
     
     f=f->next;
     val=ptr->data;
     free(ptr);
     
}
return val;
}
int listtraversal(struct node *ptr)////////////Code for traversal logic///////////////
{
      while(ptr!=NULL)
      {
           cout<<"the Element in  the queue is:- "<<ptr->data<<endl;
         ptr=ptr->next;
      }
}
int main()
{
     

   
     enqueu(44);
      enqueu(34);
      cout<<"dequeing the element from the list:"<<dequeu()<<endl;
  cout<<"dequeing the element from the list:"<<dequeu()<<endl;
  listtraversal(f);
}