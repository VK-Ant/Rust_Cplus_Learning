//Typedef - Reserved keyword used to create an additional name
//(Alias) for another datatype.
//New identifier for an existing type.
//Helps with readability and reduces types


#include <iostream>
#include<vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

int main()
{


//pairlist_t pairlist;

text_t firstName = "VK";
std::cout << firstName << '\n';

return 0;


}