#include<stdio.h>
#define SIZE 10
int top1=-1;
int top2=-1;
int st1[10],st2[10],i,n;

void push_st1(int data)
{
  if(top1<SIZE1-1)
  {
    st[++top1]=data;
  }
  else
    printf("stack full\n");
}
void push_st2(int data)
{
  if(top1< SIZE2-1)
  {
    st2[+top++]=data;
  }
  else
    printf("stack full\n");
}
void dispay1_st1()
{
  int i;
  for(i=top1;i>0;--i)
  {
    printf("%d",st1[i]);
  }
}
void display_st2()
{
  int i;
  for(i=top2;i>0;--i)
  {
    printf("%d",st1[i]);
  }
}
int main()
{
  int st1[10],st2[10],i,n;
  printf("enter the elements in to the stack\n");
  for(i=0;i<5;i++)
  {
    printf("enter the element\n");
    scanf("%d",&ele);
    push_st1(ele);
  }
  for(i=0;i<5;i++)
  {
    printf("enter the element in to the stack2\n");
    scanf("%d",&ele2);
    push_st2(ele2);
  }
  display_st1();
  display_st2();
}
      
    
