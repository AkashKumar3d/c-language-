#include<stdio.h>
#include<conio.h>
void arreypoint( int ptr[],int n);
int main()
{	int arr[]={10,120,36,25,232};
    arreypoint(arr,5);

    getch(); 
    return 0;
}
void arreypoint(int ptr[],int n){
    for( int i=0;i<n;i++){
   printf("the value of arrey is %d and %d\n",i+1,ptr[i]);
}
}