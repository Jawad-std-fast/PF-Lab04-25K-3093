#include <stdio.h>

int main() {
    int size, quantity, crust, time, deliveryOption;
    char extraCheese, studentID;
    float total = 0;
    
    printf("WELCOME TO PIZZA SHOP\n\n");
    

    printf("Choose pizza size:\n");
    printf("1. Small ($8)\n2. Medium ($10)\n3. Large ($12)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &size);
    
    switch(size) {
        case 1: total = 8; break;
        case 2: total = 10; break;
        case 3: total = 12; break;
        default: 
            printf("Invalid size.\n");
            return 1;
    }
    
  
    printf("\nHow many pizzas? (1-3): ");
    scanf("%d", &quantity);
    
    
    if(quantity == 2) {
        total *= 2;
        total *= 0.9375; // 15/16 discount for 2 pizzas
    } else if(quantity == 3) {
        total *= 3;
        total *= 0.875; // 21/24 discount for 3 pizzas
    } else if(quantity != 1) {
        printf("Invalid quantity.\n");
        return 1;
    }
    
    printf("Base cost for %d pizza(s): $%.2f\n", quantity, total);

    printf("\nChoose crust type:\n");
    printf("1. Regular crust: $0\n");
    printf("2. Thin crust: +$1 per pizza\n");
    printf("3. Stuffed crust: +$2 per pizza\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &crust);
    
    switch(crust) {
        case 1: break;
        case 2: total += 1 * quantity; break;
        case 3: total += 2 * quantity; break;
        default: 
            printf("Invalid crust type.\n");
            return 1;
    }

    printf("\nDo you want extra cheese? (Y/N): ");
    scanf(" %c", &extraCheese);
    if(extraCheese == 'Y' || extraCheese == 'y') {
        total += 1.50 * quantity;
        printf("Extra cheese added for each pizza.\n");
    }
    
   
    printf("\nEnter current time (0-23): ");
    scanf("%d", &time);
    if(time >= 11 && time <= 14) {
        float discount = total * 0.10;
        total -= discount;
        printf("10%% lunch discount applied: -$%.2f\n", discount);
    }
    

    printf("\nDo you have a student ID? (Y/N): ");
    scanf(" %c", &studentID);
    if(studentID == 'Y' || studentID == 'y') {
        total -= 2.00;
        printf("Student discount applied: -$2.00\n");
    }

    printf("\nChoose delivery option:\n");
    printf("1. Pickup\n");
    printf("2. Delivery (+$3)\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &deliveryOption);
    if(deliveryOption == 2) {
        total += 3.00;
        printf("Delivery charge: +$3.00\n");
    }
    
   
    printf("\n");
    if(quantity == 3 && crust == 3) {
        printf("Congratulations! You get free garlic bread!\n");
    }
    

    printf("\n=== ORDER RECEIPT ===\n");
    printf("Final total amount: $%.2f\n", total);
    printf("Thank you for your order!\n");
    
    return 0;
}

