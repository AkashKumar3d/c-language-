#include<stdio.h>
#include<stdlib.h>
int main()
{	int n,a,i,j;
printf("press 1 for: inputed number  and inputed number prime or not\n");
printf("press 2 for: 2 to 20 tables\n");
printf("press 3 for: 20 to 2\n");
printf("press 4 for: exit\n");
printf("enter the any number\n");
scanf("%d",&n);
switch(n){
    case 1:
    printf("enter the any number of table\n");
    scanf("%d",&a);
    if(a%2==1){
        printf("the number is prime\n");
    }else{
        printf("the nuber is not prime\n");

    }
    for(i=1;i<=10;i++){
        printf("%d\n",a*i);
    }
    break;
    case 2:
    for(i=2;i<=20;i++){
        for(j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,(i*j));
        }
    }
    break;
    case 3:
    for(i=20;i>=2;i--){
        for(j=1;j<=10;j++){
        printf("%d*%d=%d\n",i,j,(i*j));
        }
    }
    break;
    case 4:if(n==4){
    printf("exit%d\n");
    exit(0);
}
break;
}
    return 0;
}