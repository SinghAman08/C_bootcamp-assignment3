// 8. Write a program to check whether a given year is a leap year or not.

// Date-> 11/10/23 ,Author Name = Aman Singh

/*A leap year has 366 days (the extra day is the 29th of February), and it comes after every four years. To check if a year is
a leap year, divide the year by 4. If it is fully divisible by 4, it is a leap year. For example, the year 2016 is divisible 4,
so it is a leap year, whereas, 2015 is not.
However, Century years like 300, 700, 1900, 2000 need to be divided by 400 to check whether they are leap years or not.*/

#include <stdio.h>
int main()
{
    int yr;
    printf("please  Enter year\n");
    scanf("%d", &yr);

    // if (yr % 10 == 0)
    // {
    //     if (yr % 400 == 0)
    //         printf("%d is a leap year\n", yr);
    //     else
    //         printf("%d is not a leap year\n", yr);
    // }
    // else
    // {
    //     if (yr % 4 == 0)
    //         printf("%d is a leap year\n", yr);
    //     else
    //         printf("%d is not a leap year\n", yr);
    // }

    (yr % 10 == 0) ? (yr % 400 == 0 ? printf("l%d is a leap year",yr): printf("%d is not leap year",yr)):(yr % 4 == 0 ? printf("%d is a leap year",yr): printf("%d is not a leap year",yr));

    return 0;
}
