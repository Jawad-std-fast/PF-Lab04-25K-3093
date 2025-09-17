#include <stdio.h>

int main() {
    int deliveryOption;
    float total = 21; 
    
    printf("Current total: $%.2f\n", total);
    printf("Choose option:\n");
    printf("1. Pickup\n");
    printf("2. Delivery\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &deliveryOption);
    
    if(deliveryOption == 2) {
        total += 3.00;
        printf("Delivery charge: +$3.00\n");
    } else if(deliveryOption == 1) {
        printf("Pickup selected. No extra charge.\n");
    } else {
        printf("Invalid option.\n");
    }
    
    printf("Final cost: $%.2f\n", total);
    return 0;
}

