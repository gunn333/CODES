#include <iostream>
using namespace std;
int main()
{
    int x;                  // declaration
    x = 10;                 // initialization
    std::cout << x << endl; // printing
    cout << "Hello" << endl;
    //! VARIABLES
    // variable name can't start with number
    // integer (whole number)
    int a = 10;
    int b = 20.3; // 20
    std::cout << a << endl;
    std::cout << b << endl;

    // double (Number including decimal point)
    double d = 10.3;
    std::cout << d << endl;

    // single character
    char c = 'a';
    std::cout << c << endl;
    // char e = 'bc ';  //overflow in conversion from 'int ' to 'char'
    // std::cout<<e<<endl;
    // gives c as output

    // boolean (true or false)
    bool b1 = true;
    bool b2 = false;

    // string (collection of characters)
    std::string str = "Hello";
    std::cout << str << endl; // str is variable name

    std::cout << "Hello " << str << '\n';

    //! CONST KEYWORD

    // The const keyword specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it.
    double pi = 3.14;
    double radius = 10;
    double circumference = 2 * pi * radius;
    std::cout << circumference << "cm" << endl; // 62.8cm
    // any variable we don't want to change, we can use const keyword
    const double pi1 = 3.14;
    /*pi1 = 3.15; */ // error: assignment of read-only variable 'pi1'
    std::cout << pi1 << endl;

    return 0;
}
