// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    char alpha;
    printf("Please enter a alphabet\n");
    scanf("%c", &alpha);

    // if (ch >= 65 && ch <= 90)
    //     printf("%c is uppercase alphabet", ch);
    // else if (ch >= 97 && ch <= 122)
    //     printf("%c is lowercase aphabate", ch);
    // else
    //     printf("%c is not a alphabet", ch);

    ((alpha >= 65 && alpha <= 90) ? (printf("%c is uppercase alphabet", alpha)) : ((alpha >= 97 && alpha <= 122) ? printf("%c is lowercase aphabate", alpha) : printf("%c is not a alphabet", alpha)));

    return 0;
}