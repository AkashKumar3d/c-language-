#include<stdio.h>
#include<string.h>
#include<conio.h>
struct employee{
    int code;
   float sallary;
    char name[20];
    };
    void show( struct employee emp);
    //{
       // printf("code is:%d\n",emp.code);
        // printf("sallary is:%f\n",emp.sallary);
        // printf("name is:%s\n",emp.name);


    //}
int main()
{
    struct employee e1={100, 100.23,"akash"};	
    struct employee *ptr;
    ptr=&e1;
    (*ptr).code=100;
    strcpy((*ptr).name,"akash");
    show(e1);
   // printf("code is:%d\n",e1.code);
   // printf("sallary is:%f\n",e1.sallary);
   // printf("name is:%s\n",e1.name);//
    getch();
    return 0;
}
void show( struct employee emp){
        printf("code is:%d\n",emp.code);
         printf("sallary is:%f\n",emp.sallary);
         printf("name is:%s\n",emp.name);


    }