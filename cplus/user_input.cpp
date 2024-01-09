#include<iostream>

//cout<< (insertion opertor)
//cin>>(extraction operator)

int main()
{

    std::string name;
    std::string color;

    int age;

    std::cout << "What's your name?: ";
    std:: cin >> name;
    std::cout<<"Hello " <<name << "\n";


    std::cout << "What is your age?: ";
    std::cin >> age;
    std::cout<<"You are " <<age << " year old." << "\n";

//getline
    std::cout << "What is your fav color? : ";
    std::getline(std::cin >> std::ws,color);
    std::cout<<"Your fav color " << color << "\n";


    return 0;
}