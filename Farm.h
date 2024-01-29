/**
 * @file Farm.h
 *
 * @author Ishita Saripalle
 *
 * Class that describes a Farm.
 *
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */

#ifndef STEP1__FARM_H
#define STEP1__FARM_H

#include <vector>
#include <string>
#include "Cow.h"
#include "Animal.h"

/**
 * Class that describes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */
class Farm {
private:
    /// A list with the inventory of all animals on the farm
    std::vector<Animal *> mInventory;

public:
    ~Farm();
    void AddAnimal(Animal *animal);
    void DisplayInventory();
    double DisplayStenchFactor();
    int DisplayStinkyAnimals();

};

#endif //STEP1__FARM_H
