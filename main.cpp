/*
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Weapon.h"
#include "WeaponFactory.h"

using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by
 * printing its damage on standard output.
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor, double armor2) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor) << " when armor is " << armor << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor2) << " when armor is " << armor2 << std::endl << std::endl;
}

int main(int argc, char** argv) {
    srand((unsigned int)time(0));
    double armor = 29;
    double armor2 = 31;
    
    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    simulateWeapon(weapon, armor, armor2);
    delete(weapon);
    
    weapon = WeaponFactory::getInstance()->getWeapon("spear");
    simulateWeapon(weapon, armor, armor2);
    delete(weapon);
    
    //my testcases are below
    
    weapon = WeaponFactory::getInstance()->getWeapon("laser");
    simulateWeapon(weapon, armor, armor2);
    delete(weapon);
    
    weapon = WeaponFactory::getInstance()->getWeapon("hammer");
    simulateWeapon(weapon, armor, armor2);
    delete(weapon);
    
    weapon = WeaponFactory::getInstance()->getWeapon("crsword");
    simulateWeapon(weapon, armor, armor2);
    delete(weapon);
    
    return 0;
}
