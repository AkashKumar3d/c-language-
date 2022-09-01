#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{	char st[20];
printf("enter the string any name\n");
gets(st);
strrev(st);
printf("revers of the string %s\n",st);
    getch();
    return 0;
}