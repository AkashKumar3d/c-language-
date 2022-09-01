#include<stdio.h>
#include<conio.h>
 typedef struct complex{
    int real;
    int complex;

}comp;
void display(comp c);
int main()
{	 
    comp (cnums[5]);
for( int i=0;i<5;i++){
    printf("enter the ereal number %d\n",i+1);
    scanf("%d",&cnums[i].real);

     printf("enter the complex number %d\n",i+1);
    scanf("%d",&cnums[i].complex);
}
for( int i=0;i<5;i++){
    display(cnums[i]);
}


    getch();
    return 0;
}

void display(comp c){
    printf("the value of real part %d\n", c.real);
    printf("the value of complex part %d\n", c.complex);
    


}