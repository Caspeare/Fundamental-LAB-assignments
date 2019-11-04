#include<stdio.h>
int find_max(int ThisA ,int ThisB)
{
    if (ThisA>ThisB) return ThisA;
    else if (ThisB>ThisA) return ThisB;
    else return ThisB;
    
}

int main()
{
    int A, B;
    scanf("%d %d" ,&A ,&B);
    printf("%d" ,find_max(A ,B));

    return 0;
}