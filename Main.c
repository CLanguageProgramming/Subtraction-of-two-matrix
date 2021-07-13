#include <stdio.h>
int main()
{
    int a [100][100];
    int b [100][100];
    int c [100][100];
    int i, j;
    int row, column;
    printf("Enter Number of Rows:-> ");
    scanf("%d", &row);
    printf("Enter Number of Column:-> ");
    scanf("%d", &column);
    for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= column- 1;j++)
        {
            printf("Enter The Element a%d%d:- ", i+ 1, j+ 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix = \n");
    for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= column- 1;j++)
        {
            printf("%d ",a[i][j]);
            if(j == column- 1)
            {
                printf("\n");
            }
        }
    }
    for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= column- 1;j++)
        {
            printf("Enter The Element a%d%d:- ", i+ 1, j+ 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix = \n");
    for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= column- 1;j++)
        {
            printf("%d ",b[i][j]);
            if(j == column- 1)
            {
                printf("\n");
            }
        }
    }
    for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= column- 1;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Matrix = \n");
    for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= column- 1;j++)
        {
            printf("%d ",c[i][j]);
            if(j == column- 1)
            {
                printf("\n");
            }
        }
    }
}
