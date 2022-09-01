#include<stdio.h>
#include<conio.h>
int main()
{	
    int a,b,c,largest;
    printf("enter any three num\n");
    scanf("%d %d %d",&a,&b,&c);
 if (a > b)
  { 
      if (a > c)
   largest = a;
    else 
    largest = c;  
}
else { 
    if(c > b)
     largest = c; 
     else largest = b;
      }
       printf("The largest number is %d",largest); 
    getch();
    return 0;
}