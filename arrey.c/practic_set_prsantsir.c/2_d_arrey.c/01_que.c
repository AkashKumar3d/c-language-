#include<stdio.h>
#include<conio.h>
int main()
{	
    int n[3][3],i,j;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("enter the any number\n");
            scanf("%d",&n[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(n[i][j]/2==0){
                printf("%d\t",n[i][j]);
            }
            else{
                printf("%d\t",n[i][j]==0);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}