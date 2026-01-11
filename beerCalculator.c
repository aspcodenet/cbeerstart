#include <stdio.h>
#include "beerCalculator.h"

void canBuyBeer(int age, char location, float promille) {
    if (promille > 1.0) {
        printf("You are too drunk to buy beer.\n");
        return;
    }
    if (age <=20 && location == 'S' ) {
        printf("You are too young to buy beer at Systemet.\n");
        return;
    }
    if (age <=18 && location == 'K' ) {
        printf("You are too young to buy beer at Krogen.\n");
        return;
    }
   printf("Great you are allowed\n");
   return;
}