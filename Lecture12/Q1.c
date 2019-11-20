#include<stdio.h>

void compute_avg(float *ARRAY, int *SIZE)
{   
    float sum = 0;
    for (int i = 0; i < *SIZE; i++)
    {
        sum += ARRAY[i];
    }

    printf("%.2f" ,sum / *SIZE);
    
}

int main()
{
    int n;
    scanf("%d" ,&n);
    float array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f" ,&array[i]);
    }
    
    compute_avg(array,&n);

    return 0;
}