#include <stdio.h>

int main() {
    int size;
    
    printf("Choose pizza size:\n");
    printf("1. Small\n2. Medium\n3. Large\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &size);
    
    switch(size) {
        case 1:
            printf("You chose: Small\n");
            break;
        case 2:
            printf("You chose: Medium\n");
            break;
        case 3:
            printf("You chose: Large\n");
            break;
        default:
            printf("Invalid size.\n");
    }
    
    return 0;
}

