#include<stdio.h>
#include<conio.h>
int main()
{	int marks[4];
printf("enter the  value of marks for student 0: ");
scanf("%d",&marks[0]);
printf("enter the value of marks for 1: ");
scanf("%d",&marks[1]);
printf(" enter the value of marks for student 2: ");
scanf("%d",&marks[2]);
printf("enter the value of marks for  student 3: ");
scanf("%d",&marks[3]);


printf("you entered the marks %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
     getch();
    return 0;
}