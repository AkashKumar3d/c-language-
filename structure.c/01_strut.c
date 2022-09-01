#include<stdio.h>
#include<string.h>
#include<conio.h>
struct employe{
    int code;
    float sallary;
    char name[10];
};
int main()
{	

  struct employe e1;
  e1.code=100;
  e1.sallary=75.02;
  strcpy(e1.name,"harry");

  printf("%d\n",e1.code);
  printf("%.2f\n",e1.sallary);
  printf("%s\n",e1.name);
  
    return 0;
}