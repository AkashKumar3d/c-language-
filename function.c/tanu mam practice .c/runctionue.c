#include<stdio.h>

int main()
{	int marks[5],i;
printf("enter the marks of students\n\n");
scanf("%d %d %d %d %d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);

for ( i=0;i<5;i++){
        printf("%d\n",marks[i]);
}
    return 0;
}