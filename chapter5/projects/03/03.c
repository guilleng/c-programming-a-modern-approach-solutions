/*
 * C programming: A Modern Approach. Chapter 05, Project 03
 * Date: January 2023
 * Author: ffstlln
 * Description: Calculates a broker's commission.
 */

#include <stdio.h>

int main(void)
{
    float commission, value, share_price, rival_commission;
    int shares_qty;

    printf("Enter number of shares: ");
    scanf("%d", &shares_qty);
    printf("Enter price per share: ");
    scanf("%f", &share_price);

    value = shares_qty * share_price;
    
    if (value < 2500.00f)
    {
        commission = 30.00f + 0.017f * value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + 0.0066f * value;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + 0.0034f * value;
    }
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + 0.0022f * value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + 0.0011f * value;
    }
    else
    {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    if (shares_qty < 2001)
    {
        rival_commission = 33.00f + .03f * shares_qty;
    }
    else
    {
        rival_commission = 33.00f + .03f * shares_qty;
    }

    printf("Commission: $%.2f\n", commission);
    printf("Rival's commission: $%.2f\n", rival_commission);
    return 0;
}
