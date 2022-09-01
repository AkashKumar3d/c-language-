#include<stdio.h>

int main()
{	
    //input any charcter and print that wheather it is vovel or not//
    char vovel;
    printf("enter the any vovel\n");
    scanf("%c",&vovel);
    switch(vovel){
        case'a':printf("the alphabet is vovel\n");
        break;
         case'e':printf("the alphabet is vovel\n");
        break;
         case'i':printf("the alphabet is vovel\n");
        break;
         case'o':printf("the alphabet is vovel\n");
        break;
         case'u':printf("the alphabet is vovel\n");
        break;
        default:printf("the alphabet is consonent\n");
        break;
    }

    return 0;
}