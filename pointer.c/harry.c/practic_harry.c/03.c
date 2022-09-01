#include<stdio.h>
void change(int x);
int main()
{	int a=50;
int *ptr;
ptr=&a;
printf("the value of a  befor is befor change  in ten times is %d\n",a);
change(a);

    return 0;
}
void change(int x){
    printf("the value of x before change in ten times is%d\n",x*10);
}