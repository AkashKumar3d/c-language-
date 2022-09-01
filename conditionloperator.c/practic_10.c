#include<stdio.h>
//write the program for the following using the case control//
/*1.the sum of two inputed number.
2.product of two inputed number .
3.check wheather inputed number even or odd.
4.ffind maximum between three number .*/
int main()
{	
    int a,b,c,max;
    char optr;
    printf("enter the any optr(+,*)\n");
    scanf("%c",&optr);
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("enter the third number\n");
    scanf("%d",&c);
    switch(optr){
        case'+':printf("the sum of two number\n",a+b);
        if((a+b)%2=0){
            ptintf("the value is even number\n");
        }
        else(){
            printf("the value is odd number\n");
        }
        break;
        case'*':printf("the product of two number\n",(a*b)*c);
        if (a > b) {
             if (a > c)
              max = a; 
              else
              { 
        if(c > b)
         max = c; 
         else
          max = b; 
        }
          printf("The maximum number is %d\n",max); 
        break;
        }
         return 0;
}