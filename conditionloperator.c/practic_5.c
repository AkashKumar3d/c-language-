#include<stdio.h>
//find the whether the sum of three inputed number is even or odd//
int main()
{
    int a,b,c,sum;
    printf("enter the first number\n");
    scandf("%d",&a);
    printf("enter the second number\n");
    scandf("%d",&b);
    printf("enter the third number\n");
    scandf("%d",&c);
    sum=a+b+c;
    printf("the sum of three number\n",sum);
    if(sum%2=0){
        printf("the value of the sum is even number\n ");
    }else(){
        printf("the value of the sum is odd number\n");
    }return 0;
}