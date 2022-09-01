#include<stdio.h>
#include<conio.h>
int main()
{	int a=10;
int *ptr;
*ptr=&a;
printf("the value of a is %d\n ",a);
printf("the address of of a is %u\n",ptr);
     getch();
    return 0;
}