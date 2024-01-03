#include<stdio.h>
int add(int a,int b)
{
 return a+b;
}
int sub(int a,int b)
{
 return a-b;
}
int mul(int a,int b)
{
 return a*b;
}
int div(int a,int b)
{
  return a/b;
}
int main()
{
 int a,b,result;
 int choice,cont=0;
 while(cont==0)
 {
 printf("Menu:\n");
 printf("1.Add\n");
 printf("2.Sub\n");
 printf("3.Mul\n");
 printf("4.Div\n");
 printf("5.Exit\n");
 printf("Enter your choice(1/2/3/4):");
 scanf("%d",&choice);
 
 switch(choice)
{
 case 1:
     printf("Enter 2 numbers:");
     scanf("%d%d",&a,&b);
     scanf("%d%d",&a,&b);
     result=add(a,b);
     printf("Result:%d\n",result);
     break;
 case 2:
     printf("Enter 2 numbers:");
     scanf("%d%d",&a,&b);
     result=sub(a,b);
     printf("Result:%d\n",result);
     break;   
 case 3:
     printf("Enter 2 numbers:");
     scanf("%d%d",&a,&b);
     result=mul(a,b);
     printf("Result:%d\n",result);
     break;
 case 4:
     printf("Enter 2 numbers:");
     scanf("%d%d",&a,&b);
     result=div(a,b);
     printf("Result:%d\n",result);
     break;
  case 5:
     printf("Thank you!");
     cont=1;
     break;    
 default:
    printf("Invalid Choice\n");
}
}
return 0;
}            
       

