#include <iostream>

int main() {
    int x = 21; // define x as an integer variable, and r-value 21 evaluates to 21, which is then assigned to l-value x
    int y = 7;
    int z; // define an integer variable named z
    int sum = x + y; // l-value x + r-value y evaluate to r-value 28, which is then assigned to l-value sum.
    int subtract = x - y; // l-value x - r-value y evaluate to r-value 14, which is then assigned to l-value subtract.
    int multiply = x * y; // l-value x * r-value y evaluate to r-value 147, which is then assigned to l-value multiply.
    int divide = x / y; // l-value x / r-value y evaluate to r-value 3, which is then assigned to l-value divide.
    int remainder = x % y; // l-value x % r-value y evaluate to r-value 0, which is then assigned to l-value remainder.
    
    // prints the value of sum to the console
    std::cout << "sum=" << sum << std::endl;
    std::cout << "subtract=" << subtract << std::endl;
    std::cout << "multiply=" << multiply << std::endl;
    std::cout << "divide=" << divide << std::endl;
    std::cout << "remainder=" << remainder << std::endl;

    // Using the values of uninitialized variables can lead to unexpected results.
    // The value of z is different every time.
    std::cout << "unInitializedVar=" << z << std::endl;

    return 0;
}