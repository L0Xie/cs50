#include <cs50.h>
#include <stdio.h>
#include <math.h>

float raise(float a, float b);

int main(void)
{
days:
    printf("Days in month: ");
    long long d = get_long_long();

    if (d > 31)
    {
        goto days;
    }

    else if (d < 28)
    {
        goto days;
    }

    else
    {
pennie:
        printf("Pennies on first day: ");
        long long p = get_long_long();
        if (p > 0)
        {
            printf("$%.2f\n", (p * pow(2, d) - p) / 100);
        }
        else
        {
            goto pennie;
        }
    }
}