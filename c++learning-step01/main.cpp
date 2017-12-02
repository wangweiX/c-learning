#include <iostream>
// preprocessor directive.
// Preprocessor directives tell the compiler to perform a special task.
// In this case, we are telling the compiler that we would like to add the contents of the iostream header to our program.
// The iostream header allows us to access functionality from the iostream library,
// which will allow us to write text to the screen.

// declares the main() function
int main() {
    std::cout << "Hello, World!" << std::endl;
    // std::cout is a special object that represents the console/screen.
    // The << symbol is an operator (much like + is an operator in mathematics) called the output operator.
    // std::cout understands that anything sent to it via the output operator should be printed on the screen.
    
    return 0;
    // This particular return statement returns the value of 0 to the operating system,
    // which means “everything went okay!”.
    // Non-zero numbers are typically used to indicate that something went wrong, and the program had to abort.
}