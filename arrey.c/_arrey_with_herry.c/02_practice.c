#include<stdio.h>
#include<conio.h>
int main()
{	int mul[10],i,n;
printf("enter the any nmber\n");
scanf("%d",&n);
for(i=0;i<10;i++){
    mul[i]=n*(i+1);
}
for(i=0;i<10;i++){
 printf("%d*%d=%d\n",n,(i+1),mul[i]);
}
    getch();
    return 0;
}