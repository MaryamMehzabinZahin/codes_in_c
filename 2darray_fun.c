#include <stdio.h>
const int M = 3;
const int N = 3;
//'const' is a keyword in C that applies to variables. It prohibits from changing its value after its declaration.
void arraydisplay(int a[M][N])
{
    int i,j;
    for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
    }
}
int main()
{
    int a[M][N];
    int i,j;
    for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
          scanf("%d",&a[i][j]);

      }

    }
    arraydisplay(a);
}
