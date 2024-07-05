#include <stdio.h>


int main()
{
    int i,j;
    int M[100][100];
    int R=0;
    int C=0;
    scanf("%d",&R);
    scanf("%d",&C);
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d",M[i][j]);
        }
    }



}