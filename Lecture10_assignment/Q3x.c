#include <stdio.h>
int find_max(int input, int MOST)
{
    if (MOST < input)
    {
        return input;
    }
    else
    {
        return MOST;
    }
}

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int max = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            max = find_max(array[i][j], max);
        }
    }
    printf("%d", max);
    return 0;
}