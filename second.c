// Sum of two variables and their addition subtraction multiplication and division
#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    printf("Sum = %d", sum);
    printf(" Sub = %d", sub);
    printf(" Mul = %d", mul);
    printf(" Div = %d", div);
    return 0;
}
