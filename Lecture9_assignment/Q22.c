#include <stdio.h>
int main()
{
    int n;
    scanf("%d" ,&n);

    float array[n][n];
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f",&array[i][j]);
        }
    }

      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                printf("%.0f " ,array[i][j]);
                sum += array[i][j];
            }   
        }
    }
    
    printf("\n%.2f " ,sum/n);

    return 0;
}