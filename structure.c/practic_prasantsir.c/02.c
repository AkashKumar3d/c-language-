#include<stdio.h>
#include<conio.h>
struct vector{
    int a;
    int b;
};
struct vector sumvector(struct vector v1, struct vector v2 );
int main()
{
    struct vector v1,v2,sum;
    v1.a=4;
     v1.b=5;
     printf("v1 dim is %d and v2 dim is %d\n",v1.a,v1.b);

      v2.a=5;
      v2.b=8;
     printf("v1 dim is %d and v2 dim is %d\n",v2.a,v2.b);
     sum=sumvector(v1,v2);
     printf("the sum of v1 dim is %d and the sum of v2 im is %d\n",sum);
     getch();
    return 0;
}
struct vector sumvector(struct vector v1, struct vector v2 ){
    struct vector result;
   result.a=v1.a+v2.a;
   result.b=v1.b+v2.b;
   return result;

}
