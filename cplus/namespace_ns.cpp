#include<iostream>

/*
- Name space: provide a solution for preventing name conflicts in large projects. Each entity needs a unique name.
- A name space allows for identifally named entities as long as the namespaces are different.
 */

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

/*
int main()
{
    using namespace std;
    using std::cout;
    using std::string; 

    string name = "vk";
    int x = 10;
    cout << x << '\n';
    cout << first::x << '\n';
    cout << second::x << '\n';
    return 0;

}
*/
/*
int main()
{
    int x = 10;
    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    return 0;

}
*/

int main()
{
    using namespace first;

    std::cout << x << '\n';

    return 0;

}