#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
    double damage = 0;
    if(armor > 30){
        damage = hitPoints - armor;
    }
    else if(armor >= 1){
        damage = hitPoints;
    }
    if(damage < 0)
        return 0;
    
    return damage;
}
