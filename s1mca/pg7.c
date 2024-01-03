#include<stdio.h>
void main()
{
  int a[10],n,i,max;
  int *p;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the elements in the array:");
  for(i=0;i<n;i++) 
  scanf("%d",&a[i]);
  printf("The array elements are:");
  for(i=0;i<n;i++) 
  printf("%d",a[i]);
  p=&a[0];
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(max<=*p)
    max=*p;
    p++;
   }
    printf("\n Maximum elements in array:%d",max);
  }   
