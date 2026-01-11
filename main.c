#include <stdio.h>
#include <stdbool.h>
#include "beerCalculator.h"


// 1. PROBLEM (SEPARATION OF CONCERNS - REUSABILITY)
// 2. PROBLEM (TESTABILITY !)


int main() {
    while(true) {
        int age;
        char location;
        float promille;

        printf("Enter your age: ");
        scanf("%d", &age);
        printf("Enter location (S for Systemet, K for Krogen): ");
        scanf(" %c", &location);
        printf("Enter your promille level: ");
        scanf("%f", &promille);

        canBuyBeer(age, location, promille);
    }
    return 0;
}

