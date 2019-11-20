#include <stdio.h>

void find_max_min(int *arr, int n_elems, int *max, int *min);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i=0 ; i<n ; i++) {
        scanf("%d", &arr[i]);
    }

    int max , min;
    
    find_max_min(arr, n, &max, &min);
    // TODO: call the function `find_max_min` here

    printf("%d %d", max, min);

    return 0;
}

void find_max_min(int *arr, int n_elems, int *max, int *min)
{
    *max = arr[0]; *min = arr[0];
    for (int i = 0; i < n_elems; i++)
    {
        if (arr[i] >= *max)
        {
            *max = arr[i];
        }

        if (arr[i] <= *min)
        {
            *min = arr[i];
        }
        
    }
/*    

}

////////////////////////////////////////////////////////
//                 Start of your code                 //
////////////////////////////////////////////////////////

/*
    TODO: 
        Write a function definition for the function 
        `find_max_min` to determine the maximum and
        the minimum values of the array `arr`.

        The maximum value will be stored in the variable
        that the pointer `max` is pointing to.

        The minimum value will be stored in the variable
        that the pointer `min` is pointing to.
*/

////////////////////////////////////////////////////////
//                  End of your code                  //
////////////////////////////////////////////////////////