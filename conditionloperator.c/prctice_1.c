#include<stdio.h>
//swap value of two variables using the third variables//
int main()
{
    int a,b,c;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the value of a and b after swaping\n",c);
    return 0;
}