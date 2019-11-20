#include <stdio.h>
int intersect(int *arr1, int *arr2, int n, int *out)
{
    int count = 0;
    //int in = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                out[count] = arr1[i];
                count++;
                //in++;
            }
            
        }
        
    }

    

    return count;    

}

int main()
{
    int n;
    scanf("%d" ,&n);
    int arrayA[n];
    int arrayB[n];
    int arrayOUT[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&arrayA[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&arrayB[i]);
    }

    int counter = intersect(arrayA, arrayB, n, arrayOUT);

    if (counter==0)
    {
        printf("No intersect");
    }
    else
    {
        for (int i = 0; i < counter; i++)
    {
        printf("%d " ,arrayOUT[i]);
    }
    }
    
    

    
    
    return 0;
}