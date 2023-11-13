// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    (num % 2 == 0) ? (num % 3 == 0 ? printf("Yes, %d is divisible by both 2 and 3\n", num) : printf("%d is divisible by 2 but not 3\n", num)) : num % 3 == 0 ?printf("%d is divisible by 3 but not 2",num):printf("No, %d is not divisible by both 2 and 3",num);

    return 0;
}