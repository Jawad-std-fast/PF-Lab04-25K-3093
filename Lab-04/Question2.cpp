#include <stdio.h>

int main() {
    int quantity;
    
    printf("Small pizza costs $8\n");
    printf("How many small pizzas do you want? ");
    scanf("%d", &quantity);
    
    if(quantity > 1) {
        printf("Check our multi-pizza deals.\n");
    } else if(quantity == 1) {
        printf("Your total is $8.\n");
    } else {
        printf("Invalid quantity.\n");
    }
    
    return 0;
}

