#include<stdio.h>
#include<conio.h>
int main()
{	
    int n,i,j;
    printf("enter any number to print the table\n ");
    scanf("%d",&n);
    for(i=n;i<=n;i++){
        for(j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,(i*j));
        }
    }
    getch();
    return 0;
}