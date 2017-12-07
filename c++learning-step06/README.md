# Step06 - Object-oriented programming(OOP)

### So what is object-oriented programming? 

As with many things, it is perhaps understood most easily through use of an analogy. 
Take a look around you -- everywhere you look are objects: books and buildings and food and even you. 
Objects have two major components to them: 
1) A list of relevant properties (e.g. weight, color, size, solidity, shape, etc…), and 
2) Some number of behaviors that they can exhibit (e.g. being opened, making something else hot, etc…). 
These properties and behaviors are inseparable.

Object-oriented programming (OOP) provides us with the ability to create objects that tie together both properties and behaviors into a self-contained, reusable package. 


# Class
In the world of object-oriented programming, we often want our types to not only hold data, but provide functions that work with the data as well. 
In C++, this is typically done via the class keyword. Using the class keyword defines a new user-defined type called a class.


# Constructors
A constructor is a special kind of class member function that is automatically called when an object of that class is instantiated. 
Constructors are typically used to initialize member variables of the class to appropriate default or user-provided values, 
or to do any setup steps necessary for the class to be used (e.g. open a file or database).

Unlike normal member functions, constructors have specific rules for how they must be named:

Constructors should always have the same name as the class (with the same capitalization)
 - Constructors have no return type (not even void)
 - Note that constructors are only intended to be used for initialization. 


## Default constructors
A constructor that takes no parameters (or has parameters that all have default values) is called a default constructor.













