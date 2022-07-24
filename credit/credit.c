#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string guess;
    long card = get_long("Number: ");
    long mine = card;
    int temp;
    int digits = 0;
    int sum = 0;
    while (mine > 0)
    {
        mine /= 10;
        temp = mine % 10;
        temp *= 2;
        if (temp >= 10)
        {
            sum += temp % 10;
            temp /= 10;
            sum += temp;
        }
        else
        {
            sum += temp;
        }
        mine /= 10;
    }
    mine = card;
    while (mine > 0)
    {
        sum += mine % 10;
        mine /= 100;
    }
    mine = card;
    if (sum % 10 == 0)
    {
        while (mine > 0)
        {
            digits++;
            mine /= 10;
        }
        mine = card;
        if (digits == 13 || digits == 15 || digits == 16)
        {
            if (digits == 15 && (mine / 10000000000000 == 34 || mine / 10000000000000 == 37))
            {
                printf("AMEX\n");
            }
            else if (mine / 1000000000000 == 4 || mine / 1000000000000000 == 4)
            {
                printf("VISA\n");
            }
            else if (mine / 100000000000000 > 50 &&  mine / 100000000000000 < 56)
            {
                printf("MASTERCARD\n");
            }
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
    else
    {
        printf("INVALID\n");
    }
}