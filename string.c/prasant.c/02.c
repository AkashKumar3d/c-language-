#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{	char st1[30];
char st2[30];
printf("enter the  fist name st1\n");
gets(st1);
int len=strlen(st1);
printf("the lengh os first string %d\n",len);
printf("enter the second name st2\n ");
gets(st2);
int lenth=strlen(st2);
printf("the lenth of second string%d\n ",lenth);
if(len==lenth){
 printf("the lengh of st1 and st2 are  equal\n");
}
else{
    printf("the lengh of st1 and st2 are   not equal\n");
}
    getch();
    return 0;
}