#include <stdio.h>

int main() 
{
  
    char array[21];
    fgets(array,21,stdin);

    int ALP_count = 0, DIG_count = 0, i = 0;

    while(array[i] != '\0')
    {
      
        if ( array[i] >= 48 && array[i] <= 57)
        {
            DIG_count++;
        }
        else if ( (array[i] >= 65 && array[i] <= 90) || (array[i] >= 97 && array[i] <= 122 ) )
        {
            ALP_count++;
        }
        
        i++;
    }
    printf("%d %d" ,ALP_count ,DIG_count);


    return 0;
}