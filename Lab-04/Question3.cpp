#include <stdio.h>

int main() {
    int quantity;
    
    printf("Pizza deals:\n");
    printf("1 pizza: $8\n");
    printf("2 pizzas: $15\n");
    printf("3 pizzas: $21\n");
    printf("How many pizzas do you want? (1-3): ");
    scanf("%d", &quantity);
    
    switch(quantity) {
        case 1:
            printf("1 pizza: Total cost = $8\n");
            break;
        case 2:
            printf("2 pizzas: Total cost = $15\n");
            break;
        case 3:
            printf("3 pizzas: Total cost = $21\n");
            break;
        default:
            printf("Invalid quantity. Please choose 1-3.\n");
    }
    
    return 0;
}

