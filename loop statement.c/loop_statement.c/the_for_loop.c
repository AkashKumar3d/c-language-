#include<stdio.h>

int main()
{	int i,n,fa=1;
printf("enter the any number\n");
scanf("%d",n);
for(i=n;i>=1;i--);{
    fa*=1;
}
printf("the factorial is %d\n",fa);
    return 0;
}