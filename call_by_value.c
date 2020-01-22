#include <stdio.h>
#include <stdlib.h>

void swapfunction(a,b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}


int main()
{
   int a=5,b=10;
   swapfunction(a,b);
   printf("a= %d and b= %d",a,b);
   return 0;
}
