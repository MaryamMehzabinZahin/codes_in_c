

#include <stdio.h>
int main()
{
    int i,j, ara[100],temp,n=5;
    for(i=0;i<n;i++)
    {
       scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-1-i;j++)
        if(ara[j+1]<ara[j])
       {
           printf("kkk");
           temp=ara[j+1];
           ara[j+1]=ara[j];
           ara[j]=temp;
       }

    }
    printf("sorted array:\n");
    for(i=0;i<5;i++)
    {
       printf("%d",ara[i]);
    }

}
