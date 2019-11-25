#include <stdio.h>



int main()
{
    struct Student 
    {
        char firstname[21];
        char lastname[21];
        int age;
        float weight;
    };

    struct Student ID;

    scanf("%s" ,ID.firstname);
    scanf("%s" ,ID.lastname);
    scanf("%d" ,&ID.age);
    scanf("%f" ,&ID.weight);
    
    printf("%s %s, %d, %.2f" ,ID.firstname, ID.lastname, ID.age, ID.weight);




    return 0;
}