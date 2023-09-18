#include <iostream>
using namespace std;
int main()
{
    int x = 3.14;
    std::cout << x << std::endl; // 3
    /*
    We can see that the value of x is 3, not 3.14. This is because the compiler automatically converts the value of x to an integer.
    This is known as implicit type conversion.
    we truncated the fractional part of the number.
    We can also convert the value of x to a float explicitly by using the float keyword.
    */
    double y = (int)3.14;
    /*
    Here, we have explicitly converted the value of 3.14 to an integer and stored it in the double variable y.
    This is known as explicit type conversion.
    */
    //! Implicit Type Conversion
    char ch = 100;
    std::cout << ch << std::endl; // d

    //! Explicit Type Conversion
    /*
    int correct = 8;
    int questions = 10;
    double percentage = (correct / questions) * 100;
    std::cout << percentage << std::endl; //0
    ///Here, the value of percentage is 0, not 80. This is because the compiler automatically converts the value of correct and questions to an integer.
    ///We can fix this by converting the value of correct to a double.
     */
    int correct = 8;
    int questions = 10;
    double percentage = ((double)correct / questions) * 100;
    std::cout << percentage << std::endl; // 80
    return 0;
}
//! Type Conversion
/*
Type conversion is the conversion of one data type into another data type.
There are 2 types of type conversion:
    1. Implicit Type Conversion
    2. Explicit Type Conversion
///^Implicit
    Implicit type conversion is done automatically by the compiler.
    It is also known as automatic type conversion.
    It takes place when the two operands are of different data types, and one of them is converted into the other data type implicitly.
    This type of conversion is also known as coercion.
    Example:
        int a = 10;
        char b = 'A';
        a = a + b; // Here b is implicitly converted to int form
///^Explicit
    Explicit type conversion is done explicitly by the programmer.
    It is also known as type casting.
    In type casting, the data types of operands are converted manually into one another.
    Example:
        int a = 10;
        char b = 'A';
        a = a + (int)b; // Here b is explicitly converted to int form
*/