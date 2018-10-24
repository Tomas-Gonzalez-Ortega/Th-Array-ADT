/**
 * @author Tomas Gonzalez - 100266942.
 * CPSC 1160 Assignment #5 lab05 The Array ADT with operator overloading
 * Description: implements all the function members of the IntegerArray header class
 * @version Copyright © 2017-10-26 All rights reserved. Langara College
 */

// ABSTRACION - Implementation hidden for the public
#include <iostream>
#include "IntegerArray.h"
using namespace std;

// Constructs a no-arg default Array
IntegerArray::IntegerArray() {
    capacity = 10;
    pList = new int[capacity];
}

/**
 Constructs an Integer Array object with a list of integer values in it
 @param capacity an integer size of the array
 */
IntegerArray::IntegerArray(unsigned int capacity) {
    this->capacity = capacity;
    pList = new int[capacity];
}


// Destructs the IntegerArray object Array
IntegerArray::~IntegerArray() {
    delete []pList; // flush the allocated memory
}

/**
 Overloads the output stream operator using a friend function
 @param output the actual output in where we're gonna print
 @param list the actual array to print
 */
ostream &operator<<(ostream &output, const IntegerArray &list) {
    for (int i = 0; i < list.getCapacity(); i++) // Shall I use getCapacity method always?
        output << list.pList[i] ;
    return output;
}

/**
 Overloads the input stream operator using a friend function
 @param input the actual output in where we're gonna print
 @param list the actual array to print
 */
istream &operator>>(istream &input, IntegerArray &list) {
    for (int i = 0; i < list.capacity; i++) // Or shall I stick to use capacity like this ?
        input >> list.pList[i];
    return input;
}

/**
 Returns an element stored at a specific index of the array
 @param i the index value of the array in which there is an element we want to return
 @return an specific indexed int element of the array
 */
int IntegerArray::getElementAt(int i) {
    return pList[i];
}

/**
 Assigns an element to a specific location in the array identified by an index
 @param value the value you want to store
 @param i the index value of the array in which we want to store a value
 */
void IntegerArray::setElementAt(int value,int i) {
    pList[i] = value;
}

/**
 Returns the capacity of the Array
 @return capacity - the actual size of the array
 */
int IntegerArray::getCapacity() const {
    return capacity;
}

/**
 Overloads the assignment operator in the IntegerArray Class
 @param RHS is the address of the right hand side IntegerArray object for the comparison
 @return *this the verified equal capacities array object
 */
const IntegerArray &IntegerArray::operator=(const IntegerArray &RHS) {
    if(&RHS != this) {
        if(capacity != RHS.capacity) { // arrays with different size
            delete[] pList; // flush
            capacity = RHS.capacity;
            pList = new int[capacity]; // allocate using dynamic memory
        }
    }
    for(int i = 0; i < capacity; i++)
        pList[i] = RHS.pList[i];
    return *this; // enables cascading, lets say we can implement a=b=c and so on
}

/**
 Overloads the equals operator in the IntegerArray Class
 @param RHS is the address of the right hand side IntegerArray object for the comparison
 @return true if the verification turns true
 */
bool IntegerArray::operator==(const IntegerArray &RHS) const {
    if(capacity != RHS.capacity)
        return false;
    for(int i = 0; i < capacity; i++) {
        if(pList[i] != RHS.pList[i])
            return false;
    }
    return true;
}

/**
 Overloads the not equals operator in the IntegerArray Class
 @param RHS is the address of the right hand side IntegerArray object for the comparison
 @return true if the verification turns true
 */
bool IntegerArray::operator!=(const IntegerArray &RHS) const {
    if(*this == RHS)
        return false;
    return true;
}

/**
 Overloads the subscript operator in the IntegerArray Class using defensive programming
 @param subscript is the operator to overload
 @return pList[subscript] the elements subscripted to the list if its between the bounds, else will return 0
 */
const int IntegerArray::operator[](int subscript) const {
    if(subscript >= 0 && subscript < capacity) {
        return pList[subscript];
    }
    return 0;
} // Added return 0 since compiler adviced me about it "may reach end of non-void function, so I should probably throw an exception for whenever the index is out of bounds, for now it will it will returns junk. Since we haven't used exceptions yet I don't wanna risk deduction marks
