#include<stdio.h>
void goodmornig();
void goodafternoon();//function prototype//
void goodnight(); 

int main()
{	
 goodmorning();
 goodafternoon();//function call//
 goodnight();
 return 0;
}
//function deffinition//
void goodmorning(){
    printf("good morning papa\n");
}
void goodafternoon(){
    printf("good afternoon papa\n");
}
void goodnight(){
    printf("good night papa\n");
}

