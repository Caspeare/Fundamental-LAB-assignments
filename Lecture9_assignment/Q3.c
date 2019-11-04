#include <stdio.h>
int main()
{
    int row ,column;
    scanf("%d %d" ,&row ,&column);
    int array[row][column];
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((i+j)%2==0)
            {
                array[i][j] = 0;
            }
            else 
            {
                array[i][j] = 1;
            }
            
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d " ,array[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}