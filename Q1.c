#include <stdio.h>
/*      FIND THE ADDITION OF 2 DIMENSION MATRIX of 2 MATRIXs     */
int main()
{
    int row, column;
    printf("input size of row : ");
    scanf("%d" ,&row);
    printf("input size of column : ");
    scanf("%d" ,&column);

    int arrayA[row][column];
    int arrayB[row][column];
    int arraySUM[row][column];


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("input ArrayA[%d][%d] - element : " ,i ,j);
            scanf("%d" ,&arrayA[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("input ArrayB[%d][%d] - element : " ,i ,j);
            scanf("%d" ,&arrayB[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arraySUM[i][j] = arrayA[i][j] + arrayB[i][j];
        }
    }
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d " ,arraySUM[i][j]);
        }
        printf("\n");
    }

    return 0;
}