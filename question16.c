// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);

    (ch >= 48 && ch <= 57) ? (printf("%c is a digit", ch)) : ((ch >= 65 && ch <= 90) ? (printf("%c is a upppercase alphabet",ch)) : ((ch >= 97 && ch <= 122) ? (printf("%c is a lowerchase alphabet", ch)) : (printf("%c is a special symbol", ch))));

    return 0;
}
