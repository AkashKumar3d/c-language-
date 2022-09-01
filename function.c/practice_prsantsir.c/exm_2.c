#include<stdio.h>
#include<conio.h>
int table(int n);
int main()
{	
    int n,i;
    printf("enter the any number\n");
    scanf("%d",&n);
    int result=table(n);
      getch();
    return 0;
}
int table(int n){
  for( int i=1;i<=10;i++){
         printf("%d*%d=%d\n",n,i,(n*i));
    }
}