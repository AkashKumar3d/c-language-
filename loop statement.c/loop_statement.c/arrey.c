#include<stdio.h>
void main( )
 {
        int n[10],i;
         for(i=0; i<=9; i++)
          {
               printf("Enter the any number:-");
               scanf("%d",&n[i]);
          }
          printf("\n the array is :-\n");
          for(i=0;i<=9;i++);
          {
          printf("\n%d",&n[i]);
          }
          getch();
} 