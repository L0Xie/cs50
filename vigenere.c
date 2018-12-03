#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere <key(alphabetic word)>\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere <key(alphabetic word)>\n");
            return 1;
        }
    }

    string k = argv[1];
    printf("plaintet: ");
    string p = get_string();

    printf("ciphertext: ");
    for (int i = 0, j = 0; i < strlen(p); i++)
    {
        int key = toupper(k[j % strlen(k)]) - 65;

        if (isupper(p[i]))
        {
            printf("%c", (((p[i] - 65) + key) % 26) + 65);
            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", (((p[i] - 97) + key) % 26) + 97);
            j++;
        }
        else
        {
            printf("%c", p[i]);
        }
    }

    printf("\n");
}