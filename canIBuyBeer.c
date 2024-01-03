#include "canIBuyBeer.h"

bool canIBuyBeer(char location, int age){
    if(location == 'S' && age >= 20){
        return true;
    }
    if(location == 'K' && age >= 18){
        return true;
    }
    return false;
}
