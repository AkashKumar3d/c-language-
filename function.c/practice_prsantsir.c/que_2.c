#include<stdio.h>
#include<conio.h>
int maximum(int a ,int b,int c);

int main()
{	
    int a,b,c;
printf("enter the any three number\n");
scanf("%d%d%d",&a,&b,&c);
 int result= maximum(a,b,c);
 printf("the maximum number is %d\n",result);
    getch(); 
    return 0;
}
int maximum(int a,int b, int c){
  
if (a > b) {
     if (a > c)
      return  a;
       else  
return c; 
}
else
 {
      if(b > c)
       return  b;
        else
         return  c;
         }
 }
