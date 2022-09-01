#include<stdio.h>
#include<stdlib.h>
int main()
{	int n;
    float a;
    printf("Press 1 for Tea     Rs. 5.00/-\n");
    printf("Press 2 for Burger  Rs. 8.00/-\n");
    printf("Press 3 for Dosa    Rs. 25.00/-\n");
    printf("Press 4 for Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
    if(n==4){
      exit(0);
    }
    printf("Enter the quantity:-\n");
    scanf("%f",&a);

    switch(n){
case 1 : printf("You have ordered %0.2f Tea and your bill is Rs. %0.2f/- only\n",a,a*5);
     break;
case 2 : printf("You have ordered %0.2f Burger and your bill is Rs. %0.2f/- only\n",a,a*8);
     break;
case 3 : printf("You have ordered %0.2f Dosa and your bill is Rs. %0.2f/- only\n",a,a*25);
break;

    }

    

    return 0;
}