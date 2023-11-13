// 1. Write a program to check whether a given number is positive or non positive.

// Date-> 11/12/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is a positive number\n", num);
    else if (num < 0)
        printf("%d is negetive number\n", num);
    else
        printf("%d is nither positive number and nor negetive number\n", num);

    return 0;
}