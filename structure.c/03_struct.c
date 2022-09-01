#include<stdio.h>
#include<string.h>
#include<conio.h>

struct employee{
    int code;
    float sallary;
    char name[20];
};
int main()
{
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].sallary=10000.5;
   strcpy (facebook[0].name, "akash");	

 facebook[1].code=101;
    facebook[1].sallary=200.5;
   strcpy (facebook[1].name, "akankasha");	

 facebook[2].code=102;
    facebook[2].sallary=100000.5;
   strcpy (facebook[2].name, "yashvant");	
   printf("the structure is sucessfull\n");

   getch();
    return 0;
}