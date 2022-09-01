//wap to check wheather an inputed number positive ad negative//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the any number\n");
    scanf("%d",&n);
    if(n<=0){
        printf("the number is positive\n");
    }
    if(n>0){
    printf("the nuber is negative\n");
    }
    return 0;
}