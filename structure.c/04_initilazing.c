#include<stdio.h>
#include<string.h>
#include<conio.h>
struct employee { 
    int code;
    float sallary;
    char name[20];
};
int main()
{
    struct employee akash={100,100.23,"yashvant"};
    printf("code is : %d\n",100);
    printf("sallary is : %.2f\n",100.23);
    printf("name is : %s\n","akash" );

    return 0;
}