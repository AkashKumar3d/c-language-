#include<stdio.h>
int factorial(int a);
int main(){
    	int a;
printf("enter the any number of factorial\n");
scanf("%d",&a);
printf("the value of factorial  %d  is %d\n",a,factorial(a));

    return 0;
}

int factorial(int a){
    printf("calling factorial  %d\n",a);
    int f;
   if(a==0 || a==1)
   return 1;
   else
     f= a*factorial(a-1);
     return f;
}