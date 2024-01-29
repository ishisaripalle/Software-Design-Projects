/**
 * @file Skunk.h
 * @author Ishita Saripalle
 *
 * Declaration of Skunk class
 */

#ifndef STEP1__SKUNK_H
#define STEP1__SKUNK_H

#include <string>
#include "Animal.h"

/**
 * Class that describes a skunk.
 */
class Skunk : public Animal {
private:
    /// The Skunk's name
    std::string name;
    /// The Skunk's stench factor
    double stenchFactor;

public:
    void ObtainSkunkInformation();
    void DisplayAnimal();
    double CalculateStenchFactor();

};

#endif //STEP1__SKUNK_H
