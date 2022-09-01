#include<stdio.h>
#include<conio.h>
struct vector{
    int a;
    int b;
};
int main()
{
    struct vector v1,v2;
    v1.a=34;
     v1.b=50;
     printf("v1 dim is %d and v2 dim is %d\n",v1.a,v1.b);

      v2.a=5;
     v2.b=8;
     printf("v1 dim is %d and v2 dim is %d\n",v2.a,v2.b);
     getch();
    return 0;
}