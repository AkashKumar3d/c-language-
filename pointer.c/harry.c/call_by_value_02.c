#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{	int a=12,b=10;
printf("the sum of a and b is%d and %d\n",a,b);
printf("the sum of a and b is  %d\n",sum(a,b));
getch();
    return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    return c;

}