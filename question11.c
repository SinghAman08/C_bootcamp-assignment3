/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing
 marks is 33. Now display whether the candidate passed the examination or failed.*/

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float sumOfsub;

    printf("enter marks of sub1\n");
    scanf("%f", &sub1);
    printf("enter marks of sub2\n");
    scanf("%f", &sub2);
    printf("enter marks of sub3\n");
    scanf("%f", &sub3);
    printf("enter marks of sub4\n");
    scanf("%f", &sub4);
    printf("enter marks of sub5\n");
    scanf("%f", &sub5);

    sumOfsub = sub1 + sub2 + sub3 + sub4 + sub5;

    sumOfsub >= 165 ? printf("Passed\n") : printf("failed");

    return 0;
}