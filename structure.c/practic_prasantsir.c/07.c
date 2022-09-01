#include<stdio.h>
#include<conio.h>
typedef struct complex{
    int real;
    float imaginary;

}comp;
void complex(comp c);

int main()
{	
    comp  cnum[5],c;
    for(int i=0;i<5;i++){
    printf("enter the real part of num is %d\n",i+1);
    scanf("%d",&cnum[i].real);

    printf("enter the imaginary part of num is %f\n",i+1);
    scanf("%f",&cnum[i].imaginary);
    }
    for( int i=0;i<5;i++){
    complex(cnum[i]);
}

    //printf("enter the real part of num is %d\n",c.real);
   // printf("enter the imaginary part of num is %f\n",c.imaginary);
    


    getch();
    return 0;
}
void complex(comp c){
 printf("enter the real part of num is %d\n",c.real);
    printf("enter the imaginary part of num is %f\n",c.imaginary);
}