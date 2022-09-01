#include<stdio.h>
#include<conio.h>
int main()
{	
    int i=30;
    int *j=&i;
    printf("the value of i is %d\n",i);
//printf("the value of i is %d\n",*j);//optional hai ye//
printf("the address of j is %d\n",*(&j));
//printf("the address of i is %u\n",&i);//optional hai ye//
printf("the address  of i is %u\n",j);
printf("the address of j is %u\n",&j);

    getch();
    return 0;
}