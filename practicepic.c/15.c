#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{	FILE *ptr;
    char c;
    ptr = fopen("Problem15.txt","w");
    fprintf(ptr,"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
    fclose(ptr);
    ptr = fopen("Problem15.txt","r");
    c=fgetc(ptr);
    while(c!=EOF){
        printf("%c",tolower(c));
        c = fgetc(ptr);
    }
    fclose(ptr);

    return 0;
}