#include<stdio.h>
#include<conio.h>
 typedef struct date{
     int date;
     int month;
     int year;
 }date;
 void display( date d);
 void datecmp(date d1, date d2){
      if(d1.year>d2.year){
          return 1;
      }
      if(d1.year<d2.year){
          return -1;
      }
      if(d1.month>d2.month){
          return 1; 
      }
      if(d1.month<d2.month){
          return -1; 
      }
      if(d1.date>d2.date){
          return 1; 
      }
      if(d1.date<d2.date){
          return -1; 
      }
      getch();
      return 0;
     
  }

int main()
{    date d1={2,10,20};
    date d2={5,11,22};
    display(d1);
    display(d2);
    int a=datecmp(d1,d2);
     printf("the date compare ofter result is %d ",a);

    getch();
    return 0;
}
 void display( date d){
     printf("the date is %d/%d/%d\n",d.date,d.month,d.year);
 }
 