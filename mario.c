#include <cs50.h>
#include <stdio.h>

int main(void)
{
input:
    printf("Height: ");
    int h = get_int();

    if (h < 0 || h > 23)
    {
        goto input;
    }

    int hash = 2;

    for (int t = h; t > 0; t--)
    {
        for (int i = h - hash; i > -1; i--)
        {
            printf(" ");
        }

        for (int i = hash; i > 0; i--)
        {
            printf("#");
        }

        printf("\n");

        hash = hash + 1;
    }
}