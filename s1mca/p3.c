#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the value of n:");
scanf("%d",&n);
printf("prime numbers from 0 to %d;",n);
for(i=2;i<=n;i++)
{
for(j=2;j<=j;j++)
{
if(i==j)
{
printf("%d\n",i);
}
if(i%j==0)
{
break;
}
}
}
return 0;
}

