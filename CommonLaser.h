#include <string>
#include "Weapon.h"

#ifndef COMMONLASER_H
#define COMMONLASER_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of
 * armor points)
 */
class CommonLaser : public Weapon {
public:
    
    CommonLaser() : Weapon("Common laser", 70.0) { //Calls Weapon(name, hitpoints) constructor with values Common Laser and 70.0
    }
    
    virtual ~CommonLaser() {};
    
    virtual double hit(double armor);
    
};

#endif /* COMMONLASER_H */
