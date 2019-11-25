#include <stdio.h>
#include <string.h>
#define max 50

int main()
{
    char A[11],B[11],C[11];
    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);

    char all_strs[max];

    strcpy(all_strs, A);
    strcat(all_strs, ",");

    strcat(all_strs, B);
    strcat(all_strs, ",");

    strcat(all_strs, C);

    printf("%s" ,all_strs);


    return 0;
}