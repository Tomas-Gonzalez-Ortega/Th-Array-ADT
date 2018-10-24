/**
 * Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #5 lab05 The Boolean ADT with Operator overloading
 * Description: a header file, Boolean.h, in which a Boolean class is declared. To utilize the advantages of the abstraction, the implementations of the function members of the class should not been consisted in his file.
 * Copyright © 2017-10-26 All rights reserved. Langara College
 */
// #include <iostream> is NOT included otherwise it wont find the header file in there
#ifndef Boolean_h
#define Boolean_h

class Boolean {
public:
    // Internal data is a single value (true or false)
    bool statement;

    // Constructs a no-arg default boolean object
    Boolean();

    // Construct a circle object
    Boolean(bool);
    
    /**
     * Compares boolean values with passed boolean variable using an AND logical operator
     * @param aBoolean the another boolean object passed to compare
     * @return aBoolean, the value after comparing with a boolean variable
     */
    bool operator&&(const bool& aBoolean) const;

    /**
     * Compares boolean values with passed boolean variable using an AND logical operator
     * @param aBoolean the another boolean object passed to compare
     * @return a bool value after comparing with a boolean variable
     */
    bool operator||(const bool& aBoolean) const;

    /**
     * Compares her with a passed boolean variable using an XOR logical operator
     * @param aBoolean the another boolean object passed to compare
     * @return a bool value after comparing with a boolean variable
     */
    bool operator^(const bool& aBoolean) const;

    /**
     * Negates the boolean state of the object
     * @return a bool value after negating it
     */
    bool operator!();
};

#endif /* Boolean_h */
