#include<iostream>

//Typeconversion - conversion a value of one data type to another 
// - Implicit = automatice, Explict precede value with new data type (int)

int main()

{

//double x = (int) 3.14;

//implicit
char x = 100; //ascii code
std::cout << x << "\n";
//explict
std::cout<< (char) 101 << "\n";

//demo
int correct = 8;
int question = 10;
double score = correct / (double)question * 100;

std::cout << score << "%" << "\n";



return 0 ;


}