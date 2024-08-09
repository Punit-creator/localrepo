#include<iostream>
using namespace std;
struct stack *s;
struct  stack
{
     int size;
     int top=-1;
     int *arr;

};

int isFull(struct stack *s)
{
      if(s->top==s->size-1)
{
      return 1;

}
else{
      return 0;
}
}
void push(int data)
{
      if(isFull(s))
      {
           cout<<"stack overflow";
      }
      else{
                  
                  s->top++;
               s->arr[s->top]=data;
      }
}
int peek(int i){
    int arrayInd = s->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return s->arr[arrayInd];
    }
}
void show()
{
    for (int i = s->top; i >= 0; i--)
    {
        cout<<s->arr[i];
}

}
int isEmpty(struct stack *s)
{
      if(s->top==-1)
      {
           return 1;
      }
      else
      {
           return 0;
      }
}



int pop()
{int val=-1;
      if(isEmpty(s))
      {
           cout<<"underflow";
      }
      else
      {
          val=s->arr[s->top];
           s->top--;
          
      }
       return val;
}

int main()
{
stack *s=(struct stack*)malloc(sizeof(struct stack));

    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

    push(10);
    push(20);
  

    for(int j = 1; j <= s->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(j));
    }

}