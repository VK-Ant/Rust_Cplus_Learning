#include<iostream>
#include<cmath>

int main()

{
    double a;
    double b;
    double c;

    std::cout<<"Enter the side A: " << "\n";
    std::cin >> a;

    std::cout<<"Enter the side B: " << "\n";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout<< "Right Angled Triangle: " << c << "\n";

    return 0;


}