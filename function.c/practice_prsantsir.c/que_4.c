#include<stdio.h>
#include<conio.h>
int reverse(int n);

int main()
{	
    int n,rev=0,reminder ;
    printf("enter the any number\n");
    scanf("%d",&n);

    
      // der;
       int   n % = 10;
    
      printf("reversed number=%d\n",rev);

    getch();
    return 0;
}
int reverse(int n){
    int rev=0, reminder;
    while (n != 0) {
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n /= 10;
        return 0;
    }
}