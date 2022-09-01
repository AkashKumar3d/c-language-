#include<stdio.h>
#include<string.h>
#include<conio.h>
struct employee{
    int code;
    float sallary;
    char name[10];
};
int main()
{	
    struct employee e1,e2,e3;
    printf("enter the code of first employee e1\n:");
    scanf("%d",&e1.code);
     printf("enter the sallary of first employee e1\n:");
    scanf("%f",&e1.sallary);
     printf("enter the name of first employee e1\n:");
    scanf("%s",e1.name);

     printf("enter the code of second employee e2\n:");
    scanf("%d",&e2.code);
     printf("enter the sallary of second employee e2\n:");
    scanf("%f",&e2.sallary);
     printf("enter the name of second employee e2\n:");
    scanf("%s",e2.name);

     printf("enter the code of third employee e3\n:");
    scanf("%d",&e3.code);
     printf("enter the sallary of third employee e3\n:");
    scanf("%f",&e3.sallary);
     printf("enter the name of third employee e3\n:");
    scanf("%s",e3.name);
    

    getch();
    return 0;
}