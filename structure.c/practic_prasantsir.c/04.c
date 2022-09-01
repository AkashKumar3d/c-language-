#include<stdio.h>
#include<string.h>
#include<conio.h>
struct employee{
    int code;
    float sallary;
    char name[10];

};
int main()
{	struct employee e1={100,100.23,"akash"};
     struct employee *ptr=&e1;
     ptr->code;
     ptr->sallary;//arrow oprater//
     ptr->name;
     printf("code is :%d\n",e1.code);
      printf("sallary is :%f\n",e1.sallary);
      printf("name; is :%s\n",e1.name);
      getch();
    return 0;
}