#include<stdio.h>
//find the maximum of two number//
int main()
{
    int m,n,max;
    printf("enter the first number\n");
    scanf("%d",&m);
    printf("enter the second number\n");
    scanf("%d",&n);
    if(m>n){
        max=m;
    }
    else(){
    max=n;
    printf("the number is maximum %d\n",max);
    }
    return 0;
}