#include<stdio.h>
#include<conio.h>
int main()
{	 int marks[4];
     int *ptr;
     ptr=&marks[0];
     for( int i=0;i<4;i++){
         printf("enter the value of marks first student %d\n ",i+1);
         scanf("%d",ptr);
         ptr++;
     }
      for( int i=0;i<4;i++){
         printf("enter the value of marks first student  %d and %d\n ",i+1,marks[i]);
     }
    getch();
    return 0;
}