//wap to make a calculater which is abale to do operater /*-+ using case control//
#include<stdio.h>
int main()
{
    char optr;
    int a,b;
    printf("enter any opreter(+-*/)\n");
    scanf("%c",&optr);
    printf("enter any two number\n");
    scanf("%d %d",&a,&b);
        switch(optr){
            case'+':printf("the result is %d\n",a+b);
            break;
            case'-':printf("the result is %d\n",a-b);
            break;
            case'*':printf("the result is %d\n",a*b);
            break;
            case'/':printf("the result is %d\n",a/b);
            break:
            default:printf("wrong options\n");
            break;
            }
            return 0;
            }