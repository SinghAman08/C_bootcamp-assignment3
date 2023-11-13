// 15. Write a program to check whether a given number is positive, negative or zero.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    num < 0 ? (printf("%d is a negetive number", num)) : (num == 0 ? printf("%d is Zero", num) : printf("%d is a positive number", num));

    return 0;
}