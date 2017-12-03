# Functions

A **function** is a reusable sequence of statements designed to do a particular job. 

A **function call** is an expression that tells the CPU to interrupt the current function and execute another function. 

The function initiating the function call is called the caller, and the function being called is the **callee** or **called** function. 


## Nested functions

Functions can not be defined inside other functions (called nesting) in C++. The following program is not legal:
``` c++
 #include <iostream>
 
 int main()
 {
     int foo() // this function is nested inside main(), which is illegal.
     {
         std::cout << "foo!" << std::endl;
         return 0;
     }
  
     foo();
     return 0;
 }
 
```





# Forward declarations and definitions

A **forward declaration** allows us to tell the compiler about the existence of an identifier before actually defining the identifier.

To write a forward declaration for a function, we use a declaration statement called a **function prototype**.





# Declarations vs. definitions

A **definition** actually implements or instantiates (causes memory to be allocated for) the identifier.  

A **declaration** is a statement that announces an identifier (variable or function name) and its type.



