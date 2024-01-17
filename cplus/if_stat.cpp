#include<iostream>

int main()
{

// if statements - do something if a condition is true, if not , then don't do it

int age;
std::cout<< "Enter your age: ";
std::cin>>age;

if(age >= 18 && age<=99){
    std::cout<<"welcome to the site! enjoy the game"<< "\n";
}
else if(age < 0) {
    std::cout<< "you havenot been born yet!"<< "\n";
}
else if (age >= 100){
    std::cout<<"you are too old to enter this site!"<< "\n";
}
else {
    std::cout << "you are not old enough to enter the site!"<< "\n";
}

return 0;




}