#include<stdio.h>
#include<conio.h>
int main()
{	
    int n,i,j;
printf("enter the any number\n");
scanf("%d",&n);
for(i=n;i>=2;i--){
    for(j=1;j<=10;j++){
        printf("%d\n\n",i*j);
    }
}
   getch();
    return 0;
}