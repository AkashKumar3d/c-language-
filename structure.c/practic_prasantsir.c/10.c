#include<stdio.h>
#include<conio.h>
 typedef struct time{
     int hour;
     int minute;   
     int second;
 }time; 
int main()
{	
    time t1={2,20,59};
    printf("the time is hh/mm/ss:%d:%d:%d",t1.hour)
    getch();
    return 0;
}