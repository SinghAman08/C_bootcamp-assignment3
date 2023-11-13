// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{   
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    (num % 3 == 0) ? (num % 7 == 0 ? printf("Yes, %d is divisible by both 3 and 7\n", num) : printf("%d is divisible by 3 but not 7\n", num)) : num % 7 == 0 ?printf("%d is divisible by 7 but not 3",num):printf("No, %d is not divisible by both 3 and 7",num);


    return 0;
}