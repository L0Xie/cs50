#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("ISBN: ");
    long long isbn = get_long_long();

    int tenth = isbn % 10;
    int sum = 0; //in order to have global variable, you have to declare it in advance
    for (int i = 9; i > 0; i--)
    {
        isbn = isbn / 10;
        sum = sum + (isbn % 10 * i);
    }

    if (tenth > (sum % 11) || tenth < (sum % 11)) //((tenth = sum % 11)) to display "YES" doesn't work, why?
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}