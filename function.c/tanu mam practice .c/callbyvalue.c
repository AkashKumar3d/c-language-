#include<stdio.h>
int sum(int a,int b);
int main()
{	
    int x,y, res;
    printf("enter the first number\n");
    scanf("%d\n",&x);
    printf("enter the second number\n");
    scanf("%d",&y);
    res=sum(x,y);
    printf("the sum of two number %d\n",res);
    return 0;
}
int sum( int a, int b){
     int result;
     result =(a+b);
     return result;
    
}