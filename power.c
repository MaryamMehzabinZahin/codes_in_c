

#include <stdio.h>
int main()
{
int a,i,p,multi=1;
printf("enter a number:\n");
scanf("%d",&a );
printf("enter a power:\n");
scanf("%d",&p);

for(i=p;i>0;i--)
{
    multi=multi*a;
}
printf("%d is ans ",multi);
}
