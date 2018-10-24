/**
 * @author Tomas Gonzalez - 100266942.
 * CPSC 1160 Assignment #5 lab05 The Array ADT with operator overloading
 * Description: a header file, IntegerArray.h, in which an IntegerArray class is declared. To take advantages of the abstraction, the implementations of the function members of the class should not been consisted in his file
 * @version Copyright © 2017-10-26 All rights reserved. Langara College
 */

#ifndef IntegerArray_h
#define IntegerArray_h
#include <iostream>
using namespace std;

class IntegerArray {

public:
    // Constructs a no-arg default Array
    IntegerArray();
    
    /**
     Construct an Integer Array object with a list of integer values in it
     @param capacity the actual size of the array as an Integer value
     */
    IntegerArray(unsigned int capacity);
    
    // Destructor
    ~IntegerArray();
    
    /**
     Overloads output stream operator using a friend function
     */
    friend ostream &operator<<(ostream &, const IntegerArray &);
    
    /**
     Overloads input stream operator using a friend function
     */
    friend istream &operator>>(istream &, IntegerArray &);
    
    /**
     Returns an element stored at a specific index of the array
     @param index the index value of the array in which there is an element we want to return
     @return an specific indexed int element of the array
     */
    int getElementAt(int index);
    
    /**
     Assigns an element to a specific location in the array identified by an index
     @param value the integer value to set in the array
     @param index the integer index number
     */
    void setElementAt(int value, int index);
    
    /**
     Returns the capacity of the Array
     @return capacity - the size of the array
     */
    int getCapacity() const;
    
    /**
     Overloads the assignment operator in the IntegerArray Class
     */
    const IntegerArray &operator=(const IntegerArray &);
    
    /**
     Overloads the equals operator in the IntegerArray Class
     */
    bool operator==(const IntegerArray &) const;
    
    /**
     Overloads the not equals operator in the IntegerArray Class
     */
    bool operator!=(const IntegerArray &) const;
    
    /**
     Overloads the subscript operator in the IntegerArray Class
     */
    const int operator[](int) const;
    
private:
    // a pointer, an address to allocate the array
    int* pList;
    unsigned int capacity;
};

#endif /* IntegerArray_h */
