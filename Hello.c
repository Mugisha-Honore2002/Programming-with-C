//  #include <stdio.h>
// //  int main() {
// //     printf("Hello, World!\n");
// // return 0;
    
// //  }
//  int main() {
//     int number;
//     // printf("Enter number: ");
//     // scanf("%d", &number);
//     // printf("You entered: %d\n", number);

//     return 0;
//  }

#include <stdio.h>

int main() {
    int number1, number2, sum;
    printf("Enter a number 1: ");
    scanf("%d", &number1);
    
    printf("Enter a number 2: ");
    scanf("%d", &number2);
    sum = number1 + number2;
    
    printf("sum: %d\n", sum);

    return 0;
}