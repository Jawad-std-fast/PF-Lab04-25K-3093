#include <stdio.h>

int main() {
    int time;
    float total = 21; // Assuming 3 pizzas as base
    
    printf("Enter current time (0-23): ");
    scanf("%d", &time);
    
    printf("Original total: $%.3f\n", total);
    
    if(time >= 11 && time <= 14) {
        float discount = total * 0.10;
        total -= discount;
        printf("10%% lunch discount applied: -$%.2f\n", discount);
    }
    
    printf("Discounted total: $%.2f\n", total);
    return 0;
}

