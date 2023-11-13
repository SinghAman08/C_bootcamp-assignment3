// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    printf("Enter third number\n");
    scanf("%d", &num3);

    num1 > num2 ? ((num1 > num3) ? printf("gretest number is %d among %d %d %d\n", num1, num1, num2, num3) : printf("greatest number is %d among %d %d %d\n", num3, num1, num2, num3)) : (num2 > num3 ? (printf("gretest number is %d among %d %d %d\n", num2, num1, num2, num3)) : (printf("gretest number is %d among %d %d %d\n", num3, num1, num2, num3)));

    return 0;
}