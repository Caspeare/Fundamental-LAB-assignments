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
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");

    int sum = 0;
    int final_vertical;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d " ,array[i][j]);
        }
        for (int j = 0; j < column; j++)
        {
            
            sum += array[i][j];
        }
        printf("%d \n" ,sum);
        final_vertical = sum;
        sum = 0;
        

    }

    sum = 0;
    int final_horizontal;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
           
            sum += array[j][i];
        }
        final_horizontal = sum;
        printf("%d " ,sum);
        sum = 0;
    }

    printf("%d " ,final_vertical+final_horizontal);

    
    

     
    return 0;
}