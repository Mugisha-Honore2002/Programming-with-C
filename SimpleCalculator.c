#include <stdio.h>

int main() {
    float number1;
    float number2;
    float sum, sub, mult, division;
    int num;
    float result;

    // input to enter numbers
    printf("Enter Number1: ");
    scanf("%f", &number1);

    printf("Enter Number2: ");
    scanf("%f", &number2);

    // calculations
    printf("Press 1: For Addition, 2: For Subtraction, 3: For Division, 4: For Multiplication, 5: For Modulus\n");
    scanf("%d", &num);
//============= PERFORM ADDITION BASED ON USER INPUT ==============

    if (num == 1) {
        sum = number1 + number2;
        printf("The sum of %.2f + %.2f = %.2f\n", number1, number2, sum);
    }
//============= PERFORM SUBTRACTION BASED ON USER INPUT ==============

    else if (num == 2) {
        sub = number1 - number2;
        printf("The difference of %.2f - %.2f = %.2f\n", number1, number2, sub);
    }
//============= PERFORM DIVISION BASED ON USER INPUT ==============

    else if (num == 3) {
        division = number1 / number2;
        printf("The division of %.2f / %.2f = %.2f\n", number1, number2, division);
    }
//============= PERFORM MULTIPLICATION BASED ON USER INPUT ==============

    else if (num == 4) {
        mult = number1 * number2;
        printf("The multiplication of %.2f X %.2f = %.2f\n", number1, number2, mult);
    }
//============= PERFORM MODULUS BASED ON USER INPUT ==============

    else if (num == 5) {
        int a = (int)number1, b = (int)number2;
        printf("The modulus of %.2f %% %.2f = %d\n", number1, number2, a % b);
    }
//============= INVALID INPUT ==============
    else {
        printf("You chose the wrong number\n");
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int a = 7;
//     int b = 2;
//     float result = a / b;

//     printf("Result = %.2f", result);

//     return 0;
// }



