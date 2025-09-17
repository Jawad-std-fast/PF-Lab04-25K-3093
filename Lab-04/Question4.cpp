#include <stdio.h>

int main() {
    int crust, total = 0;
    int quantity;
    
    printf("How many pizzas? ");
    scanf("%d", &quantity);

    if(quantity == 1) total = 8;
    else if(quantity == 2) total = 15;
    else if(quantity == 3) total = 21;
    else {
        printf("Invalid quantity\n");
        return 1;
    }
    
    printf("Choose crust type:\n");
    printf("1. Regular crust: $0\n");
    printf("2. Thin crust: $1\n");
    printf("3. Stuffed crust: $2\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &crust);
    
    switch(crust) {
        case 1:
            total += 0;
            break;
        case 2:
            total += 1;
            break;
        case 3:
            total += 2;
            break;
        default:
            printf("Invalid crust type.\n");
            return 1;
    }
    
    printf("New total cost: $%d\n", total);
    return 0;
}

