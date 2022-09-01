#include<stdio.h>
#include<conio.h>
#include<string.h>
struct custemer{
    int accountnumber;
    float balance;
    char holdername[20];
};

int main()
{	
    struct custemer c1,c2;
    c1.accountnumber=1202301458;
    c1.balance=35600.23;
    strcpy(c1.holdername ,"akash");

    printf("account number is: %d\n",c1.accountnumber);
     printf("balance is: %.2f\n",c1.balance);
      printf("holder name is: %s\n",c1.holdername);


     c2.accountnumber=1202301454;
    c2.balance=12300.23;
    strcpy(c2.holdername,"yashvant");

 printf("account number is: %d\n",c2.accountnumber);
     printf("balance is: %.2f\n",c2.balance);
      printf("holder name is: %s\n",c2.holdername);
    getch();
    return 0;
}