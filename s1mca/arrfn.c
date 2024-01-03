#include<stdio.h>
int sum(int arr[],int n)
{
 int add=0;
 for(int i=0;i<n;i++)
  {
   add+=arr[i];
  }
 printf("Sum:%d\n",add);
}
int main()
{
 int len,num;
 printf("Enter length of array:");
 scanf("%d",&len);
 int arr[len];
 for(int i=0;i<len;i++)
   {
     printf("Enter %d number:",i+1);
     scanf("%d",&num);
     arr[i]=num;
   }
 sum(arr,len);
}    
