/**
 * Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #5 lab05 The Boolean ADT with operator overloading
 * Description: implements all the function members of the Boolean class in this file.
 * Copyright © 2017-10-26 All rights reserved. Langara College
 */

// Implementation hidden for the public
#include <iostream>
#include "Boolean.h"
using namespace std;

// Construct a default non-arg Boolean object
Boolean::Boolean() {
    statement = false;
}

/**
 *  Constructs an argumented Boolean object
 *  @bool statement updates the boolean state of the boolean variable
 */
Boolean::Boolean(bool statement) {
    this->statement = statement;
}

/**
 * Returns an AND comparison between objects (left one is an object of the class)
 * @aBoolean the actual argument to compare using AND operator overloading
 * @return the AND comparison between the boolean state of the objects
 */
bool Boolean::operator&&(const bool& aBoolean) const {
    return this->statement && aBoolean;
}
/* QUESTION: COULD BE DISPLAYED LIKE THIS ALSO ?
 bool Boolean::operator&&(const bool &aBoolean) {
     return this->statement && aBoolean;
 }
 */

/**
 * Returns an OR comparison between objects (left one is an object of the class)
 * @aBoolean the actual argument to compare using OR operator overloading
 * @return the OR comparison between the boolean state of the objects
 */
bool Boolean::operator||(const bool& aBoolean) const {
    return this->statement || aBoolean;
}

/**
 * Returns an XOR comparison between objects (left one is an object of the class)
 * @aBoolean the actual argument to compare using XOR operator overloading
 * @return the XOR comparison between the boolean state of the objects
 */
bool Boolean::operator^(const bool& aBoolean) const {
    return  this->statement ^ aBoolean;
}

/**
 * Negates the actual boolean state of the object
 * @return the negation of the boolean state of the statement
 */
bool Boolean::operator!() {
    return !this->statement;
}


