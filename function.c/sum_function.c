#include<stdio.h>
int sum(int a,int b);//function prototype//
int main()
{	int c;
c=sum(5,72);//function call//
printf("the valu of c is%d\n",c);
    return 0;
}
//function definition//
int sum( int a,int b){
int c;
    c=a+b;
    return c;
}