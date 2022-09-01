#include<stdio.h>
#include<conio.h>
int main()
{	int n,i=1;
printf("enter the any number\n");
scanf("%d",&n);
while(i<=10){
    printf("%d\n",n*i);
    i++;
}
getch();
    return 0;
}