#include<stdio.h>
#include<conio.h>
int main()
{	
   int i,first,middle,last,n,search,array[100];
   printf("enter the any eliment\n");
   scanf("%d",&n);
   printf("enter %d integer\n",n);
   for(i=0;i<n;i++)
   scanf("%d",array[i]);
   printf("enter the value to find \n");
   scanf("%d",&search);
   first=0;
   last=n-1;
   middle=(first+last)/n;
   while(first<=last){
       if(array[middle]<search)
       first=middle+1;
       else if(array[middle]==search){
           printf("%d found at location %d\n",search,middle+1);
           break;
       }
       else
       last=middle-1;
       middle=(first+last)/n;
   }
   if(first>last)
   printf("not found !%d is not present in the list \n",search);
    getch();
    return 0;
}