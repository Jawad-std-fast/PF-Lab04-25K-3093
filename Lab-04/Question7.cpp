#include <stdio.h>

int main() {
    char studentID;
    float total = 21; // Assuming base total
    
    printf("Current total: $%.2f\n", total);
    printf("Do you have a student ID? (Y/N): ");
    scanf(" %c", &studentID);
    
    if(studentID == 'Y' || studentID == 'y') {
        total -= 2.00;
        printf("Student discount applied: -$2.00\n");
    }
    
    printf("Final cost: $%.2f\n", total);
    return 0;
}

