#include "canIBuyBeer.h"

bool canIBuyBeer(char location, int age){
    if((location == 'S' || location == 's') && age >= 20){
        return true;
    }
    if((location == 'K' || location == 'k' ) && age >= 18){
        return true;
    }
    return false;
}
