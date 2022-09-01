#include<stdio.h>
#include<conio.h>
int main()
{	
    int i,array[5]={100,200,300,400,500};
    int *ptr=array;
    *(ptr+2)=1000;
    for(i=1;i<=5;i++)
    printf("arr[%d]=%d\n",i,(ptr+i));
    getch();
    return 0;
}