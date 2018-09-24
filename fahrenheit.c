#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("C: ");
    float c = get_float();
    printf("F: %.1f\n", ((c * 9) / 5) + 32);
}