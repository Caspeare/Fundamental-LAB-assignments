#include <stdio.h>
int isTriangle(float side1, float side2, float side3);

int main()
{
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    isTriangle(A, B, C);
    

    return 0;
}

int isTriangle(float side1, float side2, float side3)
    {
        if (side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
        {
            printf("1");
        }
        else
        {
            printf("-1");
        }

        return 0;   

    }