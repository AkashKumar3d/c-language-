#include<stdio.h>

int main()
{	
    int n;//input any number 1to 12 to print the month name//
printf("enter the any number\n");
scanf("%d",&n);

    if(n==1){
        printf("the month is january\n");
        }
    else if(n==2){
        printf("the month is febaury\n");
        }        
    else if(n==3){
        printf("the month is march\n");
        }
    else if(n==4){
        printf("the month is april\n");
        }
    else if(n==5){
        printf("the month is may\n");
        }
    else if(n==6){
        printf("the month is june\n");
        }
    else if(n==7){
        printf("the month is july\n");
        }
    else if(n==8){
        printf("the month is augest\n");
        }
    else if(n==9){
        printf("the month is september\n");
        }
    else if(n==10){
        printf("the month is octuber\n");
        }
    else if(n==11){
        printf("the month is number\n");
        }
    else if(n==12){
        printf("the month is december\n");
        }
    else{ 
        ptintf("wroung option\n");
    }

    return 0;
}