#include<stdio.h>
#include<conio.h>
int main()
{	
    int a,b,c;
    printf("enter the first number %d\n");
    scanf("%d",&a);
    printf("enter the second number %d\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the after swaping value a and b is%d and %d\n",a,b);
    getch();
    return 0;
}