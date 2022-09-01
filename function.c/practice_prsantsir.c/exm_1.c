#include<stdio.h>
int sum(int a,int b);
void main()
{	
    int a,b,sum;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum of two number%d\n",sum);
    getch();
}
int sum(int a,int b){
    return a+b;
}
