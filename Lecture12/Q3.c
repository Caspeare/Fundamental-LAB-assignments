#include <stdio.h>

int i = 1;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
void sort_values(int *x, int *y, int *z)
{
    while( (*x>*y) || (*x>*z) || (*y>*z))
    {
        if (*x>*y)
        {
            swap(x, y);
        }

        if (*y>*z)
        {
            swap(y, z);
        }
        
        
    }
    

}

int main()
{
    int a,b,c;
    scanf("%d %d %d" ,&a ,&b ,&c) ;
    sort_values(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;

}