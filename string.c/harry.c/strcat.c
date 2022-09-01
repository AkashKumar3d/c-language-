#include<stdio.h>
#include <string.h>
int main()
{	char st[30]="hello";
char *st2="akash";
strcat(st,st2);
printf("now st is %s\n",st);

    return 0;
}