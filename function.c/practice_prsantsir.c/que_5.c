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
    int flag;
    if(n==0){
        printf("1 is nither prime not composite \n");
    }
    else{
        if(flag==0)
        printf(" %d the number is  prime\n");
         else
        printf("%d is not a prime no.",n);
    }
    
}