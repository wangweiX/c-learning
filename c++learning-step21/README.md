# Step21 - Passing arguments by value / reference / address

## Passing arguments by value 
By default, arguments in C++ are passed by value. When an argument is passed by value, the argument’s value is copied into the function’s parameter.

#### Advantages of passing by value:
Arguments passed by value can be variables (e.g. x), literals (e.g. 6), expressions (e.g. x+1), structs & classes, and enumerators. In other words, just about anything.
Arguments are never changed by the function being called, which prevents side effects.

#### Disadvantages of passing by value:
Copying structs and classes can incur a significant performance penalty, especially if the function is called many times.

#### When to use pass by value:
When passing fundamental data type and enumerators, and the function does not need to change the argument.

#### When not to use pass by value:
When passing arrays, structs, or classes.

In most cases, pass by value is the best way to accept parameters of fundamental types when the function does not need to change the argument. Pass by value is flexible and safe, and in the case of fundamental types, efficient.


## Passing arguments by value 
#### Advantages of passing by reference:
 - References allow a function to change the value of the argument, which is sometimes useful. Otherwise, const references can be used to guarantee the function won’t change the argument.
 - Because a copy of the argument is not made, pass by reference is fast, even when used with large structs or classes.
 - References can be used to return multiple values from a function (via out parameters).
 - References must be initialized, so there’s no worry about null values.

#### Disadvantages of passing by reference:
 - Because a non-const reference cannot be made to an const l-value or an r-value (e.g. a literal or an expression), reference arguments must be normal variables.
 - It can be hard to tell whether a parameter passed by non-const reference is meant to be input, output, or both. Judicious use of const and a naming suffix for out variables can help.
 - It’s impossible to tell from the function call whether the argument may change. An argument passed by value and passed by reference looks the same. We can only tell whether an argument is passed by value or reference by looking at the function declaration. This can lead to situations where the programmer does not realize a function will change the value of the argument.

#### When to use pass by reference:
When passing structs or classes (use const if read-only).
When you need the function to modify an argument.

#### When not to use pass by reference:
When passing fundamental types (use pass by value).
When passing built-in arrays (use pass by address).


## Passing arguments by address
#### Advantages of passing by address:
Pass by address allows a function to change the value of the argument, which is sometimes useful. Otherwise, const can be used to guarantee the function won’t change the argument. (However, if you want to do this with a non-pointer, you should use pass by reference instead).
Because a copy of the argument is not made, it is fast, even when used with large structs or classes.
We can return multiple values from a function via out parameters.

#### Disadvantages of passing by address:
Because literals and expressions do not have addresses, pointer arguments must be normal variables.
All values must be checked to see whether they are null. Trying to dereference a null value will result in a crash. It is easy to forget to do this.
Because dereferencing a pointer is slower than accessing a value directly, accessing arguments passed by address is slower than accessing arguments passed by value.

#### When to use pass by address:
When passing built-in arrays (if you’re okay with the fact that they’ll decay into a pointer).
When passing a pointer and nullptr is a valid argument logically.

#### When not to use pass by address:
When passing a pointer and nullptr is not a valid argument logically (use pass by reference and dereference the pointer argument).
When passing structs or classes (use pass by reference).
When passing fundamental types (use pass by value).

