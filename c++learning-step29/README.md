# Step29 - Friend functions and classes

A friend function or class is a function or class that can access the private members of another class as though it were a member of that class. This allows the friend or class to work intimately with the other class, without making the other class expose its private members (e.g. via access functions).

Friending is uncommonly used when two or more classes need to work together in an intimate way, or much more commonly, when defining overloading operators (which we’ll cover in chapter 9).

Note that making a specific member function a friend requires the full definition for the class of the member function to have been seen first.

## Friend functions
A friend function is a function that can access the private members of a class as though it were a member of that class.


## Friend classes
This gives all of the members of the friend class access to the private members of the other class. 

## Friend member functions

