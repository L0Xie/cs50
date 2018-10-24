#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./calc <variable> <operation(+, -, x, /, or %%)> <variable>\n");
        return 1;
    }

    float a = atof(argv[1]);
    float b = atof(argv[3]);

    switch (argv[2][0])
    {
        case '+':
            printf("%f\n", a + b);
            break;

        case '-':
            printf("%f\n", a - b);
            break;

        case 'x':
            printf("%f\n", a * b);
            break;

        case '/':
            printf("%f\n", a / b);
            break;

        case '%':
        {
            int q = a / b; //without the curly braces, the "int" declaration will prompt the error "expected expression"
            printf("%f\n", a - (b * q));
            break;
        }

        default:
            printf("Usage: ./calc <variable> <operation(+, -, x, /, or %%)> <variable>\n");
            return 1;
    }
}