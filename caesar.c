#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }

    int k = atoi(argv[1]);
    printf("plaintet: ");
    string p = get_string();

    printf("ciphertext: ");
    for (int i = 0; i < strlen(p); i++)
    {
        if (isupper(p[i]))
        {
            printf("%c", (((p[i] - 65) + k) % 26) + 65); //No need to put the single quotations marks here.
        }
        else if (islower(p[i]))
        {
            printf("%c", (((p[i] - 97) + k) % 26) + 97); //It jsut works.
        }
        else
        {
            printf("%c", p[i]);
        }
    }

    printf("\n");
}