#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
int main()
{	int x=4,y=3;
printf("the value of x and y is after swap %dand%d\n",x,y );
swap(&x,&y);
printf("the value of x and y is before swap %dand%d\n",x,y);
    getch();
    return 0;
}
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
   
}