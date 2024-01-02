#include<iostream>

int main() {

    //The const keyword specifies that a variables value is constant
    // tells the compiler to prevent anything from modifying it
    // read-only

    const double pi = 3.14;
    double radius = 18;
    double circumference = 2 * pi * radius;

    std::cout << "Constant declaration" << "\n";
    std::cout << circumference << "cm" << std::endl;

    return 0;
}