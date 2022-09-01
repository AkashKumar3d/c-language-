#include<stdio.h>
#include<conio.h>
int main()
{
     float pi=3.14, r, area,dimeter,circumfrance;
    printf("enter the any radius value\n");
    scanf("%f",&r);
    area=pi*r*r;
    printf("the area of the circle %f\n",area);
    dimeter=r*2;
     printf("the dimeter of the circle %f\n",dimeter);
    circumfrance=2*pi*r*r;
     printf("the circumfrence  of the circle %f\n",circumfrance);
    getch();
    return 0;
}