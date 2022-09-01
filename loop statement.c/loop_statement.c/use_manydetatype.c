#include<stdio.h>
#include <stdlib.h>
int main()
{	int n,a,b,num1,num2,sum,subtract,division;
char operator;
float f1,f2,product;
long int e; 
double d;
printf(" press 1 for: int deta type\n");
printf("press 2 for: char deta type\n");
printf("press 3 for: float deta type\n");
printf("press 4 for:long deta type\n");
printf("press 5 for:double deta type\n");
printf("enter the any number\n");
scanf("%d",&n);
switch(n){
    case 1:printf("enter the first number\n");
           scanf("%d",&num1);
           printf("enter the second number\n");
           scanf("%d",&num2);
           sum=num1+num2;
           printf("the sum of two number%d\n",sum=num1+num2);
           break;
    case 2:printf("enter the any operator(+,-,/,*)\n");
           scanf("%d",&operator);
           printf("enter the any two number\n");
           scanf("%d %d",&f1,&f2);
             if(operator=='+'){
                 printf("the sum of two number is %d\n",sum=a+b);
             }
             else if(operator=='-'){
                 printf("the subtract of two number is%d\n",subtract=a-b);
             }
              else if(operator=='*'){
                 printf("the product of two number is%d\n",product=a*b);
             }
              else if(operator=='/'){
                 printf("the division of two number is%d\n",division=a/b);
             }else{
                 printf("wroung oprator\n");
             }
             break;
    case 3:printf("enter the first decimal number\n");
           scanf("%f",&f1);
           printf("enter the second decimal number\n");
           scanf("%f",&f2);
           product=f1*f2;
           printf("the product of two deimal number is%f\n",product);
           break;
    case 4:printf("enter e\n");
           scanf("%ld",&e);
           printf("%d\n",e);
           break;
    case 5:printf("enter d\n");
           scanf("%lf",&d);
           printf("%f\n",d);
           break;
}
    return 0;
}