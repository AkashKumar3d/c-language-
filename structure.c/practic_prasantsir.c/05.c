#include<stdio.h>
#include<conio.h>
struct complex{
    int real;
    int complex;
};
int main()
{
    struct complex a,b;
   a.real=20;
    b.complex=30;
    printf("real is %d and complex is %d\n",a.real,b.complex);



    return 0;
}