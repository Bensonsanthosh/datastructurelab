#include<stdio.h>
void main()
{
 int size,i;
 printf("Enter the array size:");
 scanf("%d",&size);
 int arr[size],*p=arr;
 printf("Enter the array elements:");
 for(i=0;i<size;i++)
 {
   scanf("%d",p+i);
  }
  printf("The array elements are:");
  for(i=0;i<size;i++)
  {
    printf("%d",*(p+i));
   }
}     
