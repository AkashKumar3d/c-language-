//find the largest amonge three numbers//
#include<stdio.h>
int main(){
    int a,b,c,ma;
    printf("enter any three number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    { 
if (a>c)
 ma=a;
 else  
ma=c; 
}
else {
 if(c>b)
 ma=c;
 else ma=b;
  } 
  printf("enter the largest number %d\n",ma);
}