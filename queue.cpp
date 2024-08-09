#include<iostream>
using namespace std;

struct queue
{
     int size;
     int *arr;
     int f;
     int r;


};

int  isEmpty(struct queue *p )
{
if(p->f==p->r)
{
     return 1;
}
else
{
     return 0;
}
     
}
int isFull(struct queue *&p)///Condition to check whether the 
{
     if(p->r==p->size-1)
     {
         return 1;
     }
     else
     {

         return 0;
     }
}


void enqueu(struct queue *&p,int val)//For Adding the elements in the queue//
{                                                    
     if(isFull(p))
     {
         cout<<"queue overflow"<<endl;

     }
     else
     {  
        p->r++;
        p->arr[p->r]=val;
     }

}
int dequeu(struct queue *&p)//For removing the elements from the queue//
{
     int a=-1;
     if(isEmpty(p))
     {
         cout<<"queue is empty";

     }
     else
     {
         p->f++;
         a=p->arr[p->f];
     }
     return a;
}
int main()
{
     struct queue *p;
      
      p->size=10;
      p->arr=(int*)malloc(p->size*sizeof(int));
      p->r=-1;
      p->f=-1;
      enqueu(p,12);
     enqueu(p,13);
     enqueu(p,17); 
   cout<<"Dequeing the element from the list"<<dequeu(p);
   cout<<"Dequeing the element from the list"<<dequeu(p);

      if(isEmpty(p))

      { 
          cout<<"Queue is empty";

      }
      else
      {
           cout<<"Queue is Full";
      }
  

}












