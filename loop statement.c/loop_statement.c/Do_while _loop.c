#include<stdio.h>

int main()
{	int chr,i;
do{
    printf("table of 2\n");
    printf("table of 5\n");
    printf("table of 8\n");
    printf("exit\n");
    printf("enter the any number\n");
    scanf("%d",&chr);
    switch(chr){
        case'1':for(i=1;i<=10;i++)
        printf("%d\n",(2*i));
        break;
        case'2':for(i=1;i<=10;i++)
        printf("%d\n",(5*i));
        break;
        case'3':for(i=1;i<=10;i++)
        printf("%d\n",(8*i));
        break;
        case'4':printf("exit\n");
        break;
        default:printf("wroung option\n");
    }
}while(chr!=4);
    return 0;
}