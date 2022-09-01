#include<stdio.h>
#include<conio.h>
 int factorial(int n);
int main()
{	
   int n;
   printf("enter the any number for factorial \n");
   scanf("%d",&n);
   printf("the factorial of a is %d is %d \n",n,factorial(n));
   getch();
   return 0;
}
int factorial(int n){
    printf("calling factorial %d\n",n);
    int f;
    if(n==0||n==1)
    return 1;
    else
    f=n*factorial(n-1);
    return f;
}
 