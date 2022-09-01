#include<stdio.h>
#include<conio.h>
int cube(int n);
int main()
{	int n, cube;
printf("enter the any number\n");
scanf("%d",&n);
cube=n*n*n;
printf("the value of the cube is%d\n",cube);

getch();
    return 0;
}
int cube(int n){
    return n*n*n;
}