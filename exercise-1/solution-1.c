#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Please write an intiger: ");
    scanf("%i", &num1);
    printf("Please enter another intiger: ");
    scanf("%i", &num2);

    int sum = num1 + num2;
    printf("The sum is: %i\n", sum);

    int difference = num1 - num2;
    printf("The difference is: %i\n", difference);

    int product = num1 * num2;
    printf("The product is: %i\n", product);

    if (num2 != 0) {
        float quotient = (float)num1 / (float)num2;
        printf("The quotient is: %.2f\n", quotient);
    }
}