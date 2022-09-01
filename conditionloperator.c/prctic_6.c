#include<stdio.h>
//enter the minimum number between 5 inputed number//
int main(){
    int a,b,c,d,e;
    printf("enter the any number\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a<b && a<b && a<c && a<d){
        printf("the value  is minimum\n");
    }
    else if(b<a && b<c && b<d && b<e){
        printf("the value is minimum\n");
    }
    else if(c<a && c<b && c<d && c<e){
        printf("the value is minimum\n");
    }
    else if(d<a && d<b && d<c && c<e){
        printf("the value is minimum\n");
    }
    else if(e<a && e<b && e<c ){
        printf("the value is minimum\n");
    }
    else()
    printf("wrong right");
    }
    return 0;
}