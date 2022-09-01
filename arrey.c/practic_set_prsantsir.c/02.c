	#include<stdio.h>

int main()
{	int marks[10];
for( int i=0;i<10;i++){
    printf("enter the value of ,marks for student %d\n",i+1);
    scanf("%d",&marks[i]);
}
for( int i=0;i<10;i++){
     printf("you have entered the marks of the student %d\n",marks[i]);
}
    return 0;
}