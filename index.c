#include <stdio.h>

int main() {

    // Declare variables
    // float is used for input because the user may enter decimals
    float totalInput, feePercent;

    // long is used for RWF calculations to avoid decimal problems
    long totalRWF, feeRWF, amountAfterFee;
    long shareRWF, remainderRWF;

    int friends;

    // Ask the user to enter the total amount
    printf("Enter total amount (RWF): \n \n");
    scanf("%f", &totalInput);

    // Ask the user to enter the number of friends
    printf("Enter number of friends: ");
    scanf("%d", &friends);

    // Ask the user to enter the service fee percentage
    printf("Enter service fee percentage: ");
    scanf("%f", &feePercent);

    // Check that the number of friends is valid
    if (friends <= 0) {
        printf("Error: Number of friends must be greater than 0.\n");
        return 1;
    }

    // Check that the total amount is not negative
    if (totalInput < 0) {
        printf("Error: Amount cannot be negative.\n");
        return 1;
    }

    // Check that the service fee percentage is valid
    if (feePercent < 0 || feePercent > 100) {
        printf("Error: Fee percentage must be between 0 and 100.\n");
        return 1;
    }

    // Convert the float amount safely into integer RWF
    // Adding 0.5 helps round the amount to the nearest whole RWF
    totalRWF = (long)(totalInput + 0.5);

    // Calculate the service fee
    // We use integer arithmetic after converting the input
    feeRWF = (long)(totalRWF * feePercent / 100.0 + 0.5);

    // Calculate the amount remaining after removing the service fee
    amountAfterFee = totalRWF - feeRWF;

    // Divide the remaining money equally among friends
    // Integer division gives the amount each friend receives
    shareRWF = amountAfterFee / friends;

    // Calculate the amount that cannot be divided equally
    // % gives the remainder
    remainderRWF = amountAfterFee % friends;

    // Display the results
    printf("\n===== Airtime Split Results =====\n");

    printf("Total Amount\t\t%d RWF\n", totalRWF);
    printf("Service Fee\t\t%d RWF\n", feeRWF);
    printf("Amount After Fee\t%d RWF\n", amountAfterFee);
    printf("Friends\t\t\t%d\n", friends);
    printf("Share Per Friend\t\t%d RWF\n", shareRWF);

    // The remainder is kept by the administrator
    printf("Extra Coins Kept by Admin\t%d RWF\n", remainderRWF);

    return 0;
}