#include<stdio.h>
#include<stdlib.h>

int main()
{	int n;
float q;
printf("press 1  for tea : Rs 5.00/-\n");
printf("press 2 for burgur :Rs 8.00/-\n");
printf("press 3 for dosa :Rs 25.00/-\n");
printf("press 4 for exit\n");
printf("enter the any option\n");
scanf("%d",&n);
if(n==4){
    exit(0);
}
printf("enter the quantity:-\n");
scanf("%f",&q);

switch(n){
    case 1:printf(" you have ordered %0.2f tea and your bill is Rs. %0.2f/- only\n",q,q*5);
    break;
     case 2:printf("you have orderd  %0.2f burger and you are bill is Rs. %0.2f/- only\n",q,q*8);
    break;
     case 3:printf(" you have orderd %0.2f dosa and your bill is  Rs. %0.2f/- only\n",q,q*25);
    break;
}
    return 0;
}