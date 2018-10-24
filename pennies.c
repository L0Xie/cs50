/**
 * pennies.c
 *
 * CS50 AP
 * Old Friends
 *
 * Calculates how many pennies a user would get if their change
 * doubles each day using command line information
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./pennies <days in month(28-31)> <pennies on first day(integer larger than 0)>\n");
        return 1;
    }

    int days = atoi(argv[1]);
    int pennies = atoi(argv[2]);

    if (days < MIN_DAYS || days > MAX_DAYS || pennies <= 0)
    {
        printf("Usage: ./pennies <days in month(28-31)> <pennies on first day(integer larger than 0)>\n");
        return 1;
    }

    // relatively few pennies required to get out of bounds of int
    long long total = pennies;

    // add double the amount of pennies of the previous day each day
    for (int i = 1; i < days; i++)
    {
        total += pennies * pow(2, i);
    }

    // output the total as dollars and cents only
    printf("$%.2f\n", ((double) total) / 100);
}
