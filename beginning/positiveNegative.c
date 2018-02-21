#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("Zero");
        else
            printf("Negative");
    }
    else
        printf("Positive");
    return 0;
}