/**
 * @file Animal.h
 *
 * @author Ishita Saripalle
 */

#ifndef STEP1__ANIMAL_H
#define STEP1__ANIMAL_H

/**
 * Class that describes an animal
 *
 * This class holds the information for an animal
 */
class Animal {
private:

public:
    virtual ~Animal();
    /** Display an animal. */
    virtual void DisplayAnimal() {}
    /** Calculate an animal's stench factor.
     *
     * @return an animal's stench factor
     */
    virtual double CalculateStenchFactor() {return 0.0;}

};

#endif //STEP1__ANIMAL_H
