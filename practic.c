// Date-> 11/12/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    // if (num & 1 != 0)
    //     printf("%d is a odd number\n", num);
    // else
    //     printf("%d is a even number\n", num);
    if (num & 1 == 0)
        printf("%d is a even number\n", num);
    else
        printf("%d is a odd number\n", num);

    int var = 12 & 1;
    printf("var = %d\n",var);
    return 0;
}