#include<stdio.h>
#include<conio.h>
int number(int n);
int main()
{	int n;
printf("enter the any number\n");
scanf("%d",&n);
int result=number(n);
getch();
    return 0;
}
int number(int n){
    if(n%2==0){
        printf("the value is even\n");
    }
    else{
        printf("the value is odd\n");
    }
}