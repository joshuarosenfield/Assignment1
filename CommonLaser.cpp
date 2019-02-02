#include "CommonLaser.h"

double CommonLaser::hit(double armor){
    double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}

