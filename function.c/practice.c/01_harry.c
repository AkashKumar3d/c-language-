#include<stdio.h>
float average(int a,int b,int c);
//WAP to use function ad print the average of three number// 
int main()
{	
    int a,b,c;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("enter the third number\n");
    scanf("%d",&c);
    printf("the average of three number %f",average(a,b,c));
    return 0;
}
float average(int a,int b,int c){
    float output;
    output=(float)(a+b+c)/3;
    return output;
}