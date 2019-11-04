#include <stdio.h>
int isLeapYear(int YEAR)
{
    char IsIt;
    if ((YEAR%4 == 0 && YEAR%100!=0 && YEAR%400!=0) || (YEAR%100==0 && YEAR%400==0))
    {
        return 'L';
    }
    else
    {
        return 'C';
    }
    
    
}
int main()
{
    int year;
    scanf("%d" ,&year);
    printf("%c" ,isLeapYear(year));
    return 0;
}