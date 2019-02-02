#include "CrazyRandomSword.h"
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
double CrazyRandomSword::hit(double armor){
    double damage = 0;
    int third = armor / 3;
    if(armor == 0)
        damage = hitPoints;
    else
        damage = hitPoints - (rand() % third + 2);
    return damage;
}

