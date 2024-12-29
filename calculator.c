#include <stdio.h>

void main() {
    float x, y,sum;
    char op;


    printf("Enter the first number (x): ");
    scanf("%f", &x);

    printf("Enter the second number (y): ");
    scanf("%f", &y);

    while (1) 
    {
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf("%c", &op);

        if (op == 'q') {
            break;
        }
switch (op)
    {
    case '+' : sum = x + y;
    printf("Your sum is %f\n", sum);
        break;
        case '-' : sum = x - y;
        printf("Your sum is %f\n", sum);
        break;
        case '*' : sum = x*y;
        printf("Your sum is %f\n", sum);
        break;
    case '/' : sum = x/y;
    printf("Your sum is %f\n", sum);
        break;
    default: printf("Enter a valid operator\n");
        break;
    }
    }
}