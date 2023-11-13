// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

// Date-> 11/13/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    int sum;
    printf("Enter length of first side\n");
    scanf("%d", &side1);
    printf("Enter length of second side\n");
    scanf("%d", &side2);
    printf("Enter length of third side\n");
    scanf("%d", &side3);

    sum = side1 + side2 + side3;

    side1 > (side2 + side3) ? (printf("valid tringle")) : (side2 > (side1 + side3) ? (printf("valid tringle")) : (side3 > (side1 + side2) ? (printf("valid tringle")) : (printf("not a valid tringle"))));

    return 0;
}
