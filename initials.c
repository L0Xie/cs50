#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string name = get_string();

    if (isalpha(name[0]))
    {
        printf("%c", toupper(name[0]));
    }

    for (int i = 0; i < strlen(name); i++)
    {
        if (isalpha(name[i]) && name[i - 1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
}