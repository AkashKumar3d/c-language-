#include<stido.h>
//input any three find the maximum number between them//
int main()
{
    int a,b,c,max;
    printf("enter the first num\n");
    scanf("%d",&a);
    printf("enter the second num\n");
    scanf("%d",&b);
    printf("enter the third num\n");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        max=a;
        else()
        max=c;
    }else{
        if(c>b)
        max=c;
        else()
        max=b;
    }
    printf("the maximum num is %d\n",max);
    return 0;
} 