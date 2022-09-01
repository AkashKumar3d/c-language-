#include<stdio.h>
#include<conio.h>
void printadd(int b);
int main()
{	int i=3;
int *ptr;
ptr=&i;
printf("the value of i is %d\n",i);
printf("the address of i is %u\n",&i);
printadd(i);
    getch();
    return 0;
}
 void printadd(int b){
     printf("the address of b is %u\n",&b);
 }