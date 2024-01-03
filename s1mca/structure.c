#include<stdio.h>
struct student
{
int rollno;
float marks;
};
int main()
{
struct student student1;
student1.rollno=201;
student1.marks=85.9;
printf("Student Rollno=%d\n",student1.rollno);
printf("Student Marks=%f\n",student1.marks);
}
