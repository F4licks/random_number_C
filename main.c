#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    // Random number
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    // input number
    int value;
    

    for (int i = 1; i <= 3; i++) {
        printf("Guess random number: ");
        scanf("%d", &value);
        
        if (random_number == value) {
            printf("You win!!!");
            break;
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}