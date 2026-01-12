#include <stdio.h>
#include "beerCalculator.h"

BUYBEERSTATUS canBuyBeer(int age, char location, float promille) {
    if (promille > 1.0) {
        return BUYBEER_NO_TOOLDRUNK;
    }   
    if (age < 20 && location == 'S' ) {
        return BUYBEER_NO_TOOYOUNG_SYSTEMET;
    }
    if (age < 18 && location == 'K' ) {
        return BUYBEER_NO_TOOYOUNG_KROGEN;
    }
   return BUYBEER_YES;
}