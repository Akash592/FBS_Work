#include<stdio.h>

int main()
{
    char One;
    
    printf("Enter any character : \n");
    scanf("%c",&One);

    if( One == 'a' || One == 'e' || One == 'i' || One == 'o' || One == 'u' || One == 'A' || One == 'E' || One == 'I' || One == 'o' || One== 'U')
    {
        printf("%c is a vowel\n",One);
    }
    else
    {
        printf("%c is a consonant\n",One);
    }

    

    return 0;
}