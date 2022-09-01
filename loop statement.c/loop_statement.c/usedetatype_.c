#include<stdio.h>

int main()
{	int n1;
float d;
char name;
long l;
double a;
printf("enter the any character\n");
scanf("%c",&name);
printf("enter the any integer\n");
scanf("%d",&n1);
printf("enter the any decimal number\n");
scanf("%f",&d);
printf("enter the any long integer number\n");
scanf("%ld",&l);
printf("enter the any number\n");
scanf("%lf",&a);
printf("the character is%c\n",name);
printf("the integer value is %d\n",n1);
printf("the decimal value is %f\n",d);
printf("the long integer value is%ld\n",l);
printf("the double value is%lf\n",a);
    return 0;
}