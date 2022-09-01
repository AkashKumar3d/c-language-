#include<stdio.h>
/*input any nuber to check even or odd when the number is even 
to print table of 2and else to print the table 5*/
int main()
{ 
    int n,i=1,a=2,b=5;
    printf("enter the any number\n");
    scanf("%d",&n);
    if(n%2=0){
        print("the value is even\n");
    while(i<=10)
        printf("%d\n",a*i);
        i++;	
    }
    else;{
        printf("the value is odd\n");
        while(i<=10)
            printf("%d\n",b*i);
            i++;
        }
    return 0;
}