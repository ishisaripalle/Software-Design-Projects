/**
 * @file Skunk.cpp
 * @author Ishita Saripalle
 */

#include <iostream>
#include "Skunk.h"

using namespace std;

/**
 * Obtain a skunk description from the user.
 */
void Skunk::ObtainSkunkInformation()
{
    cout << endl;
    cout << "Input information about the skunk" << endl;

    // Obtain the name
    cout << "Name: ";
    cin >> name;

    //obtain the stench factor through a simple while loop
    while (true)
    {
        cout << "Stench Factor: ";
        cin >> stenchFactor;
        if (stenchFactor > 100)
        {
            cout << "The maximum stench factor allowed is 100." << endl;
        }
        else if (stenchFactor <= 0)
        {
            cout << "A skunk always has some smell, enter a number greater than 0." << endl;
        }
        else
        {
            break;
        }
    }
}

/**
 * Display the skunk.
 */
void Skunk::DisplayAnimal()
{
    cout << "Skunk " << name << " has a stench factor of " << stenchFactor << " stench units." << endl;
}

/**
 * Calculate the stench factor of a skunk
 *
 * @return the stench factor of  a skunk.
 */
double Skunk::CalculateStenchFactor()
{
    return stenchFactor;
}