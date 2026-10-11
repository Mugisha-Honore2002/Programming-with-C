// // program calculates trip fuel cost
// #include <stdio.h>

// // constant def using macro
// #define True 1

// // create alias for string
// typedef char * string;

// // prototype
// void get_positive_double(string prompt, double *var);

// int main(void)
// {
//     printf("===============================\n");
//     printf("   Trip Fuel Cost Calculator\n");
//     printf("===============================\n");
    
//     // get user input: distance (km), consumption (L/100km), fuel price, tank capacity (L).
//     double dist, consumption, fuel_price, tank_cap, liters, total_cost, ceiling;
//     get_positive_double("Distance (km): ", &dist);
//     get_positive_double("Consumption (L/100km): ", &consumption);
//     get_positive_double("Fuel price (RWF/L): ", &fuel_price);
//     get_positive_double("Tank capacity (L): ", &tank_cap);

//     // 1. compute and display liters needed: dist * (consumption/100)
//     liters = dist * (consumption/100);
//     printf("\nLiters needed: %.3lf\n", liters);

//     // 2. compute and display total cost: liters needed * fuel price
//     total_cost = liters * fuel_price;\
//     printf("Total cost: %.2lf RWF\n", total_cost);

//     // 3. compute and display ceiling: liters needed / tank cap
//     ceiling = liters / tank_cap;
//     printf("No of full tanks required: %.3f\n", ceiling);

//     return 0;
// }

// void get_positive_double(string prompt, double *var)
// {
//     while (True)
//     {
//         // prompt user for double input
//         printf("%s", prompt);
//         scanf("%lf", var);
//         // keep prompting until value is positive
//         if (*var > 0) br






// #include <stdio.h>

// int main() {
//     for (int i = 0; i < 5; i++) {
//         for (int x = 0; x < 5; x++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



#include <stdio.h>

int main() {

    for (int i = 1; i <= 4; i++) {
        for (int x = 4; x > i; x--) {
            printf("$");
        }

        for (int x = 1; x <= (2 * i - 1); x++) {
            printf("*");
        }

        printf("\n");
    }

    
    for (int i = 3; i >= 1; i--) {
        for (int x = 4; x > i; x--) {
            printf("$");
        }

        for (int x = 1; x <= (2 * i - 1); x++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}