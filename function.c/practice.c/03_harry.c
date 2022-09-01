#include<stdio.h>
//WAP TO USE function the calculate of the force and g=9.8//
float force(float m);
int main()
{	int m;
printf("enter the mass of the body in kgs\n");
scanf("%d",&m);
printf("the force act on a body is %f kgs\n",force(m));
    return 0;
}
float force(float m){
   float result=m*9.8;
    return result;
}