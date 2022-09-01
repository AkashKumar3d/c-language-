 #include<stdio.h>
 int main()
 {	int num[10];
 for( int i=0;i<10;i++){
     printf("enter the any 10 number %d\n",i+1);
     scanf("%d",&num[10]);
 }
 for( int i=0;i<10;i++){
     if(num[10]%2==0){
     printf(" only print even nnumber %d is %d\n",i+1,num[10]);
     }
 }
 
 
     return 0;
 }
