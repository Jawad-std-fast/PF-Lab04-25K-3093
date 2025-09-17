#include <stdio.h>

int main() {
    char extraCheese;
    float total = 0;
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
    
    printf("Do you want extra cheese? (Y/N): ");
    scanf(" %c", &extraCheese);
    
    if(extraCheese == 'Y' || extraCheese == 'y') {
        total += 1.50;
        printf("Extra cheese added for each pizza.\n");
    }
    
    printf("Total cost: $%.2f\n", total);
    return 0;
}

