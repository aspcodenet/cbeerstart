#include <stdio.h>
#include <stdbool.h>
#include "beerCalculator.h"


// 1. PROBLEM (SEPARATION OF CONCERNS - REUSABILITY)
// 2. PROBLEM (TESTABILITY !)


// testa
// canBuyBeer(18,'K',0.5) -> BUYBEER_NO_TOOYOUNG_KROGEN
// canBuyBeer(21,'S',1.5) -> BUYBEER_NO_TOOLDRUNK
// canBuyBeer(19,'S',0.5) -> BUYBEER_NO_TOOYOUNG_SYSTEMET
// canBuyBeer(25,'K',0.5) -> BUYBEER_Y


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

        BUYBEERSTATUS status = canBuyBeer(age, location, promille);
        if(status == BUYBEER_YES) {
            printf("Great you are allowed to buy beer!\n");
        } else if (status == BUYBEER_NO_TOOLDRUNK) {
            printf("You are too drunk to buy beer.\n");
        } else if (status == BUYBEER_NO_TOOYOUNG_SYSTEMET) {
            printf("You are too young to buy beer at Systemet.\n");
        } else if (status == BUYBEER_NO_TOOYOUNG_KROGEN) {
            printf("You are too young to buy beer at Krogen.\n");
        }
    }
    return 0;
}

