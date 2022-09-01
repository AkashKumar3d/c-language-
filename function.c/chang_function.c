#include<stdio.h>
void change(int a);
int main()
{	int b=44;
printf("the value of b is before  change%d\n",b);
change(b);
printf("the value of b is after change%d\n",b);

    return 0;
}
void change (b){
    b=67;
}