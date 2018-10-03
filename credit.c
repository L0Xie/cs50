#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long card, add, add2;
    int sum, sum2, total;
    //Declaring the variables in advance is a much better practice

    do
    {
        printf("Number: ");
        card = get_long_long();
    }
    while (card < 0);

    for (add = card, sum = 0; add > 0; add /= 100) //y /= x is equivalent to y = y / x
    {
        sum += add % 10; //C += A is equivalent to C = C + A
    }

    for (add2 = card / 10, sum2 = 0; add2 > 0; add2 /= 100)
    {
        if (2 * (add2 % 10) > 9)
        {
            sum2 += ((add2 % 10) * 2) / 10;
            sum2 += ((add2 % 10) * 2) % 10;
            //Missed this part in the decription, confused me for sooooooooo long!
        }
        else
        {
            sum2 += (add2 % 10) * 2;
        }
    }

    total = sum + sum2;

    if (total % 10 == 0) //one euqal sign is not the syntax here
    {
        if ((card > 4e12 && card < 5e12) || (card > 4e15 && card < 5e15))
        {
            printf("VISA\n");
        }
        else if ((card > 3.4e14 && card < 3.5e14) || (card > 3.7e14 && card < 3.8e14))
        {
            printf("AMEX\n");
        }
        else if (card > 5.1e15 && card < 5.6e15)
        {
            printf("MASTERCARD\n");
        }
        //Be REALLY mindful when dealing with big numbers and using scientific notations, wasted a lot of time here.
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}