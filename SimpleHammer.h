#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of
 * armor points)
 */
class SimpleHammer : public Weapon {
public:
    
    SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Common Laser and 70.0
    }
    
    virtual ~SimpleHammer() {};
    
    virtual double hit(double armor);
    
};

#endif /* SIMPLEHAMMER_H */

