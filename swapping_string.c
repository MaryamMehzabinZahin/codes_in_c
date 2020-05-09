#include <stdio.h>



void string_swap(char *str1,char *str2)
{
    char *temp;
    temp = str1;
    str1= str2;
    str2= temp;
    printf("str1 and str2 respectively ");
    puts(str1);
    printf("\n");
    puts(str2);

}
int main()
{
    char str1[23];
    char str2[89];

    gets(str1);

    gets(str2);
    string_swap(str1,str2);


}
