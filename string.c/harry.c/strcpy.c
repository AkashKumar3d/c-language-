#include<stdio.h>
#include <string.h>
int main()
{	char *str ="akash";
    char str2[30];
    strcpy(str2 ,str);
    printf("now the str2 is %s\n",str2);


    return 0;
}