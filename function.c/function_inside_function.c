#include<stdio.h>
void goodmornig();
void goodafternoon();//function prototype//
void goodnight(); 

int main()
{	
 goodmorning();//function call//
 return 0;
}
//function deffinition//
void goodmorning(){
    printf("good morning papa\n");
    goodafternoon();
}

void goodafternoon(){
    printf("good afternoon papa\n");
    goodnight();
}
void goodnight(){
     printf("good night papa\n");
}
