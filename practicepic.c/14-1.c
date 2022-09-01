#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int marks;
    
};
int main()
{	
    struct student s[10];
    struct student count;
    for(int i=0;i<=9;i++){
        printf("\nEnter the name of student %d :- ",i+1);
        scanf("%s",&s[i].name);
        printf("\nEnter marks of student %d :- ",i+1);
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
       if(s[i].marks<s[j].marks)
       {    
            break;      
       }
        
         count.marks=s[i].marks; 
         count.name[20]=s[i].name[i];
         
        }
    }
          printf("Highest marks of student is %d and name is %s \n",count.marks,count.name[20]);


    

    return 0;
}