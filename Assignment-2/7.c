#include<stdio.h>
int main()
{
    int iAge = 67;

    if(iAge < 12)
    {
        printf("Child\n");
    }
    else if(iAge >= 12 && iAge <=19)
    {
        printf("Teenager\n");
    }
    else if(iAge >= 20 && iAge <= 59)
    {
        printf("Adult\n");
    }
    else if(iAge >= 60)
    {
        printf("Senior\n");
    }
}