#include<stdio.h>
//input any two number and print minimum to max num table//
int main()
{	int a,b,i,j;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
if(a<b){
    for(i=a;i<=b;i++){
        for(j=1;j<=10;j++){
            printf("%d\n\n",i*j);
        }
    }
}
else{
    for(i=b;i<=a;i++){
        for(j=1;j<=10;j++){
            printf("%d\n\n",i*j);
        }
    }

}

    return 0;
}