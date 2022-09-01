#include<stdio.h>

int main()
{	/*wap  the practical point the grade of the student according to the following 
rule after inputing the percentage*/
int n;
float percentege;
printf("enter the any number\n");
scanf("%f",&n);
if(percentege<80 && percentege<=100){
    printf("distinition\n");
}
else if(percentege<60 && percentege<=79){
    printf("first division\n");
}
else if(percentege<52 && percentege<=58){
    printf("second division\n");
}
else if(percentege<40 && percentege<=49){
    printf("third division\n");
}
else if(percentege<0 && percentege<=39){
    printf("fail\n");
}
else{
printf("wroung option\n");
}
    return 0;
}