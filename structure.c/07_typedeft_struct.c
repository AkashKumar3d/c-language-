#include<stdio.h>
#include<string.h>
#include<conio.h>
 typedef struct employee{ 
    int code;
   float sallary;
    char name[20];
    } emp;

void show( struct employee emp);
    int main()
{
    emp e1;	
    emp *ptr;
    ptr=&e1;
    (*ptr).code=100;
    (*ptr).sallary=100.23;
    strcpy((*ptr).name,"akash");
    //printf("done");
    show(e1);
    
   
    getch();
    return 0;
}
void show( struct employee emp){
        printf("code is:%d\n",emp.code);
         printf("sallary is:%f\n",emp.sallary);
         printf("name is:%s\n",emp.name);


    }