#include  <stdio.h>

int swap(int* i,int*j)
   {  
       int k;
       k=i;
       i=j;
       j=k;
    }


int main()
{
    int x,y;
    printf("enter the first number ");
    scanf("%d",&x);
    printf("enter the second number ");
    scanf("%d",&y);
    swap();
    printf("%d%d",x,y);
}    