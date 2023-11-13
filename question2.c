// 2. Write a program to check whether a given number is divisible by 5 or not

// Date-> 11/12/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("%d is divisible by 5", num);
    }
    else
        printf("%d is not divisible by 5", num);

    return 0;
}