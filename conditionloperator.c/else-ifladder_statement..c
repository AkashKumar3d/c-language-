#include<stdio.h>
//else if ladder (wap to input tne number 1 to 7 and print its day name)//
int main()
{
    int n;
    printf("enter the any number\n");
    scanf("%d",&n);
    if(n==1){
        printf("the day is manday\n");
    }else if(n==2){
        printf("the day is tuesday\n");
    }else if(n==3){
        printf("the day is wednesday\n");
    }else if(n==4){
        printf("the day is thersday\n");
    }else if(n==5){
        printf("the day is friday\n");
    }else if(n==6){
        printf("the day is saterday\n");
    }else if(n==7){
        printf("the day is sunday\n");
    }else(){
    printf("wrong choice\n");
    }
    return 0;
}