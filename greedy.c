#include <cs50.h>
#include <stdio.h>

int main(void)
{
input:
    printf("O hai! How much change is owed?\n");
    double dollar = get_double();
    if (dollar < 0)
    {
        goto input;
    }
    else
    {
        int penny = dollar * 100;
        if (penny >= 25)
        {
            int quarters = (penny / 25);
            int qremainder = (penny % 25);
            int dimes = (qremainder / 10);
            int dremainder = (qremainder % 10);
            int nickels = (dremainder / 5);
            int p = (dremainder % 5);
            printf("%i\n", quarters + dimes + nickels + p);
        }
        else if (penny >= 10)
        {
            int dimes = (penny / 10);
            int dremainder = (penny % 10);
            int nickels = (dremainder / 5);
            int p = (dremainder % 5);
            printf("%i\n", dimes + nickels + p);
        }
        else if (penny >= 5)
        {
            int nickels = (penny / 5);
            int p = (penny % 5);
            printf("%i\n", nickels + p);
        }
        else
        {
            printf("%i\n", penny);
        }
    }
}