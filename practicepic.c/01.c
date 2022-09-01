#include<stdio.h>
#include<conio.h>

int main()
{	
    int a,b;
    char optr;
    printf("enter the any optr(+-*/)\n");
    scanf("%c",&optr);
    printf("enter the any two number\n");
    scanf("%d %d",&a,&b);
   // printf("enter the any optr(+-*/)");
    //scanf("%c",&optr);
    switch(optr){
        case'+':
        printf("the sum of two no is%d\n: ",a+b);
        break;
        case'-':
        printf("the subtract value is two no is%d\n:",a-b);
          break;
        case'*':
        printf("the multiply by two no is%d\n:",a*b);
          break;
        case'/':
        printf("the division of two no is %f\n:",a/b);
          break;
          default:
          printf("wrong options");
          break;
    }
    getch();
    return 0;
}
