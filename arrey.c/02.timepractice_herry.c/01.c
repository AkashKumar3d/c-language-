#include<stdio.h>
#include<conio.h>
int main()
{	 int marks[5];
for( int i=0;i<5;i++){
    printf("enter the marks of five student\n", i+1);
    scanf("%d",&marks[i]);

}
for( int i=0;i<5;i++){
    printf("the value of  marks of five student %d and : %d\n",i+1,marks[i]);

}

     getch();
    return 0;
}