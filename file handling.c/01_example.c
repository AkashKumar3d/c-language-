#include<stdio.h>
 #include<conio.h>
  struct employee {
       char n[20]; 
       int sal; };
        void main() {
             clrscr();
              int rec,i; 
              char ch;
                FILE *fp;
                 // specifies the file pointer 
                  struct employee var;
                  fp = fopen("DATA.TXT","w");
                   // opens the file in write mode
                    do
                     {
                          printf("\nEnter any name :- ");
                           fflush(stdin);
                            gets(var.n);
                             printf("Enter the salary :- ");
                              scanf("%d",&var.sal);
                               fwrite(&var,sizeof(employee),1,fp); // writes the record in file
                                printf("\n\nDo you want to add more records (y/n):-");
                                 ch=getche();
                                  }while(ch!='n');
                                   fclose(fp); // close the current open file
                                    fp=fopen("DATA.TXT","r"); // opens the file into read mode
                                     fseek(fp,0,2); // moves pointer at last of file
                                      rec = ftell(fp) / sizeof(employee); // calculate total record numbers
                                       fseek(fp,0,0); // moves pointer at begining of file 
// Display the records from the file 
for(i=1; i<=rec; i++) {
     fread(&var, sizeof(employee), 1, fp);
      printf("\n\nName is :- %s ",var.n); 
      printf("\n Salary is :- %d",var.sal);
       getch();
        }
         fclose(fp); 
} 