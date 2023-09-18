#include <iostream>
using namespace std;

namespace first
{
    int x = 10;
}

namespace second
{
    int x = 20;
}

int main()
{
    /* int x = 1;

     cout<<x<<endl; // 1
     cout<<first::x<<endl; // 10
     */
    using namespace second;
    cout << x << endl; // 20

    return 0;
}

//! NAMESPACE
/*
namespace is a collection of classes, objects, and functions
std::cout is a function in the std namespace
namespace is used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries'
using namespace std; // using namespace std; is used to avoid writing std::cout every time
namespace provides a solution for preventing name conflicts in large projects while allowing us to use short and easy-to-remember names

int x = 0;
int x = 1; // error: redefinition of 'int x'
we can't declare same variable name in same scope
*/