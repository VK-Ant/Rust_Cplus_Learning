//Typedef - Reserved keyword used to create an additional name
//(Alias) for another datatype.
//New identifier for an existing type.
//Helps with readability and reduces types


#include <iostream>
#include<vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t_age;

//using - good and work better
using  demo = std::string;
using  number_weight = float;

int main()
{


//pairlist_t pairlist;

text_t firstName = "VK";
number_t_age age = 24;

std::cout << firstName << '\n';
std::cout << age << '\n';

demo project = "Dalle2";
number_weight weight = 55.5;

std::cout << project << '\n';
std::cout << weight << '\n';



return 0;


}