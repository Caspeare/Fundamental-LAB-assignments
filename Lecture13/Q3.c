#include <string.h>
#include <stdio.h>

int main(){
    char array[21];
    scanf("%s" ,array);
    int i = 0;
    char *temp[] = array;
    printf("%s" ,temp);
    // while(array[i] != '\0')
    // {
    //     if ( (array[i] >= 48 && array[i] <= 57) || (array[i] >= 65 && array[i] <= 90) || (array[i] >= 97 && array[i] <= 122) )
    //     {

    //     }
    //     else    
    //     {
    //         array[i] = '\0' ;

    //     }

    //     i++;
    // }

    return 0;
}
