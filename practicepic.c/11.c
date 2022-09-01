#include<stdio.h>
#include<conio.h>
int main()
{	
    int mat1[3][3],mat2[3][3],mat3[3][3],sum=0,i,j,k;
    printf("enter the first 3*3 matrix eliment:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        scanf("%d",&mat1[i][j]);
    }
     printf("enter the second 3*3 matrix eliment:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        scanf("%d",&mat2[i][j]);
    }
    printf("multiplying two matrices\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++)
            sum=sum+mat1[i][k]*mat2[k][j];
            mat3[i][j]=sum;
        }
    }
    printf("multiplying result of the two given matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",sum);
        printf("\n");
    }
     getch();
    return 0;
}