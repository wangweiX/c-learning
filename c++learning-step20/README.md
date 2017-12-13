# Step20 - pointer

### Pointer
A pointer is a variable that holds a memory address as its value.

### Declaring a pointer
Pointer variables are declared just like normal variables, only with an asterisk between the data type and the variable name.

### What good are pointers?
1) Arrays are implemented using pointers. Pointers can be used to iterate through an array (as an alternative to array indices).
2) They are the only way you can dynamically allocate memory in C++. This is by far the most common use case for pointers.
3) They can be used to pass a large amount of data to a function in a way that doesn’t involve copying the data, which is inefficient
4) They can be used to pass a function as a parameter to another function.
5) They can be used to achieve polymorphism when dealing with inheritance.
6) They can be used to have one struct/class point at another struct/class, to form a chain. This is useful in some more advanced data structures, such as linked lists and trees.

### Conclusion
Pointers are variables that hold a memory address. They can be dereferenced using the dereference operator (*) to retrieve the value at the address they are holding. Dereferencing a garbage pointer may crash your application.

### Best practice
- When declaring a pointer variable, put the asterisk next to the variable name.
- When declaring a function, put the asterisk of a pointer return value next to the type.


