#include <stdio.h>

int main()
{
    int row,column;
    scanf("%d %d" ,&row ,&column);

    int array[row][column];
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d" ,&array[i][j]);
        }
    }

    
    
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d " ,array[j][i]);
        }
        printf("\n");
        

    }

     


    return 0;
}