/**
 * @file Farm.cpp
 *
 * @author Ishita Saripalle
 */

#include "Farm.h"

/**
 * Farm destructor
 */
Farm::~Farm()
{
    // Iterate over all of the animals, destroying
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();
}

/** Add an animal to the farm inventory.
 *
 * @param animal An animal to add to the inventory
 */
void Farm::AddAnimal(Animal *animal)
{
    mInventory.push_back(animal);
}

/**
 * Display the farm inventory.
 */
void Farm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        animal->DisplayAnimal();
    }
}

/**
 * Display the stench factor.
 *
 * @return the average stench value of all the animals on the farm
 */
double Farm::DisplayStenchFactor()
{
    double totalStench = 0.0;
    int totalAnimals = 0;

    for (auto animal : mInventory)
    {
        totalStench += animal->CalculateStenchFactor();
        if (animal->CalculateStenchFactor() > 0)
        {
            totalAnimals += 1;
        }

    }

    if (totalAnimals > 0)
    {
        return totalStench/totalAnimals;
    }
    else
    {
        return 0.0;
    }
}

/**
 * Display the number of stinky animals.
 *
 * @return the number of stinky animals on the farm.
 */
int Farm::DisplayStinkyAnimals()
{
    int totalAnimals = 0;

    for (auto animal : mInventory)
    {
        if (animal->CalculateStenchFactor() > 0)
        {
            totalAnimals += 1;
        }
    }
    return totalAnimals;
}
