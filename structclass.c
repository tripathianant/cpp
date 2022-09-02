#include<stdio.h>
int main()
{
     struct student
     {
         char name[20];
         int rn;
         int sub1;
         int sub2;
         int sub3;
         int sub4;
         int sub5;
     };
     struct student rohan={"Rohan",32,97,96,98,99,95};
     struct student *ptr;
     ptr=&rohan;
     printf("Name of the stuent is : %s\n",ptr->name);
     printf("Roll No. is : %d\n",ptr->rn);
     printf("Marks in Sub 1 : %d\n",ptr->sub1);
     printf("Marks in Sub 2 : %d\n",ptr->sub2);
     printf("Marks in Sub 3 : %d\n",ptr->sub3);
     printf("Marks in Sub 4 : %d\n",ptr->sub4);
     printf("Marks in Sub 5 : %d\n",ptr->sub5);
}