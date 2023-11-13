// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    float selling_price, cost_price;
    printf("Enter Cost price:\n");
    scanf("%f", &cost_price);
    printf("Enter Selling price:\n");
    scanf("%f", &selling_price);

    if (selling_price - cost_price > 0)
    {
        float profit;
        profit = (selling_price - cost_price) / 100;
        printf("Profit = %.2f%%", profit);
    }
    else
    {
        float loss;
        loss = (selling_price - cost_price) / 100;
        loss = -1 * loss;
        printf("Loss = %.2f%%", loss);
    }

    return 0;
}