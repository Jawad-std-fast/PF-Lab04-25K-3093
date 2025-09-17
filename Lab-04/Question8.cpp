#include <stdio.h>

int main() {
    int quantity, crust;
    
    printf("How many pizzas? (1-3): ");
    scanf("%d", &quantity);
    printf("Choose crust type (1-Regular, 2-Thin, 3-Stuffed): ");
    scanf("%d", &crust);
    
    if(quantity == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("No free item with this order.\n");
    }
    
    return 0;
}

