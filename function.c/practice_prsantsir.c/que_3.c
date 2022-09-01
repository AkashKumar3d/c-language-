#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{	int n;
printf("enter the any number\n");
scanf("%d",&n);
int result=factorial(n);
printf("the value of factorial is %d\n",result);
    getch();
    return 0;
}
int factorial(int n){
    int f;
    if(n==0 ||n==1)
    return 1;
    
    else
    f=n*factorial(n-1);
        return f;
    
}