// 18. Write a program which takes the month number as an input and display number of days in that month.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{

    int month;
    printf("enter a valid month number(1-12):\n");
    scanf("%d", &month);

    (month % 2 == 1) && (month <= 7 && month >= 1) ? (printf("number of day in this month is 31")) : ((month % 2 == 0) && (month >= 8 && month <= 12) ? (printf("number of day in this month is 31")) : ((month == 2) ? (printf("number of day in this month is 28")) : ((month > 12) || (month < 1))?(printf("invalid month number please entre a valid month number")):(printf("number of day in this month is 30"))));

    return 0;
}
