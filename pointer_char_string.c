#include <stdio.h>
void print_with_array(char c[])
{
    int i=0;
    while(c[i] != '\0')
    {
        printf("%c",c[i]);
        i++;
    }
}
void print_with_pointer(char* c)
{
    int i=0;
    while(*(c+i)!= '\0')
    {
         printf("%c",c[i]);
        i++;
    }
}
int  main()
{
    char c[20];
    gets(c);

    print_with_array(c);
    print_with_pointer(c);
}
