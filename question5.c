// 5. Write a program to check whether a given number is a three digit number or not.\

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if ((num > 99) &&( num < 1000))
    
        printf("%d is three a digit number\n",num);
    else
        printf("%d is not three a digit number\n",num);
    
    return 0;
}