// 3. Write a program to check whether a given number is an even number or an odd number.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even number\n", num);
    else
        printf("%d is odd number\n", num);

    return 0;
}
