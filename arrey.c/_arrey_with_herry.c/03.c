#include<stdio.h>//roung code//
#include<conio.h>
void reverse( int *arr , int n);
int main()
{	 
    int i,arr[]={1,2,3,4,5,7};
    reverse(arr,7);
    for(i=0;i<7;i++){
printf("the of %d eliment is %d\n",i,arr[i]);
    }

    getch();
    return 0;
}
void reverse(int *arr,int n){
    int temp;
    for( int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}