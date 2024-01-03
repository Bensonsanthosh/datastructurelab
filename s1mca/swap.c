#include<stdio.h>
void swap(int*a,int*b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
void main()
{
 int x,y;
 printf("Enter the number:");
 scanf("%d%d",&x,&y);
 printf("Before swap:%d %d\n",x,y);
 swap(&x,&y);
 printf("After swap:%d %d\n",x,y);
}  
