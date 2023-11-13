// 6. Write a program to print greater between two numbers. Print one number if both are the same.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter a first number\n");
    scanf("%d", &num1);
    printf("Enter a second number\n");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("%d is greater between %d and %d", num1, num1, num2);
    else if (num1 < num2)
        printf("%d is greater between %d and %d", num2, num1, num2);
    else
        printf("both number are same which are %d", num1);

    return 0;
}
