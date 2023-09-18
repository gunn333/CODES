#include <iostream>
using namespace std;
int main()
{

    std::string name;
    std::cout << "Enter your name: "; // Cannot enter space in name
    std::cin >> name;

    std::string full_name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, full_name); // Can enter space in name
    std::cout << "Hello " << name << std::endl;
    std::cout << "Hello " << full_name << std::endl;

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}
//! Input and Output
/*
cin for input
cout for output
*/

//! Remarks
/*
if we use cin to get input, we cannot enter space in the input
if we accept input using getline, we can enter space in the input
if we accept user input using cin followed by getline, we need to use cin.ignore() before getline
in our input buffer, we have a newline character, which is ignored by cin, but getline will read it as an empty line and will not wait for user input
std::cin.ignore() will ignore the newline character in the input buffer
std::cin >> std::ws will ignore all the whitespace characters in the input buffer
*/