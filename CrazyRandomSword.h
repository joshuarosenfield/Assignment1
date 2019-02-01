#include <string>
#include "Weapon.h"
#include <stdlib.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("Crazy random sword", rand() % 93 + 7)
    {}
    
    
    virtual ~CrazyRandomSword() {};
    
    virtual double hit(double armor);
    
};

#endif

