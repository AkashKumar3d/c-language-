#include<stdio.h>

int main()
{	int a,b,c,i=1,ma;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
if (a > b)
 {
      if (a > c)
       ma = a; 
       else 
       ma = c;
 } 
else
 {
      if(c > b)
       ma = c;
        else 
        ma = b; 
} 
printf("the maximum number is\n",ma);
while(i<=10){
    printf("%d\n",ma*i);
    i++;
}  
    return 0;
}