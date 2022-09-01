#include<stdio.h>
int function(int n) ;
int main()
{
int number;
    printf("Enter the number\n");
    scanf("%d", &number);
    function(number);
    return 0;
}
 int function(int n){
    
     n=(n*(n+1))/2;
    printf("Sum of first n natural number is %d",n);
    
}
