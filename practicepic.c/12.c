#include<stdio.h>
#include<conio.h>
int main()
{	
    int n,reversedN=0,reminder,originalN;
    printf("enter an integer:");
    scanf("%d",&n);
    originalN=n;
    while(n!=0){
        reminder=n%10;
        reversedN=reversedN*10+reminder;
        n/=10;
    }
    if(originalN==reversedN)
    printf("palindrome is a %d ",originalN);
    else
    printf("%d is not a palindrome",originalN);
    getch();
    return 0;
}