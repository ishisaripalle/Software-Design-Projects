/**
 * @file Cow.h
 * @author Ishita Saripalle
 *
 * Class that describes a cow
 *
 * This class holds the information for a cow.
 */

#ifndef STEP1__COW_H
#define STEP1__COW_H

#include <string>
#include "Animal.h"

/**
 * Class that describes a cow
 *
 * This class holds the information for a cow.
 */
class Cow : public Animal {
private:
    /// The types of cow we can have on our farm
    enum class Type {Bull, BeefCow, MilkCow};

    /// The cow's name
    std::string mName;

    /// The type of cow: Bull, BeefCow, or MilkCow
    Type mType =Type::MilkCow;

    /// The milk production for a cow in gallons per day
    double mMilkProduction = 0;

public:
    void ObtainCowInformation();
    void DisplayAnimal();
    double CalculateStenchFactor();

};

#endif //STEP1__COW_H
