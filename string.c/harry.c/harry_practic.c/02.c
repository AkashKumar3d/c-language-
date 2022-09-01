#include<stdio.h>
#include <string.h>
int main()
{	char st1[30];
char st2[30];
char c;
int i=0;
printf("enter the value of first string \n");
scanf("%s",st1);
printf("enter the value of second string character by charcter\n");
while(c!='\n'){
     fflush(stdin);
    // printf("enter the value of second string character by charcter\n");
      scanf("%c",&c);
     st2[i]=c;
     i++;
}
st2[i]='\0';
printf("the value of st2 is %s\n",st1);
printf("the value of st2 is %s\n ",st2);
printf("strcmp for these string return %d\n",strcmp(st1,st2));
    return 0;
}