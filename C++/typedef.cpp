#include <iostream>
#include <vector>
using namespace std;
//! Typedef and Using keyword
/*
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using namespace std;
*/
using text_t = std::string;
using number_t = int;
int main()
{
    /*
    std::vector<std::pair<std::string, int>> pairlist_t;
    pairlist_t pairlist;
    std::string first_name = "Bro";
    */
    text_t first_name = "Bro";
    // int age = 20;
    number_t age = 20;
    std::cout << first_name << " " << age << endl;
}
//! Typedef and Using keyword
/*
typedef is used to give data type a new name
reserved keyword used to create an additional name
typedef <original_name> <alias_name>;
helps with the readability of the code and reduces time
Replaced with using keyword in C++11 works better with templates
using <alias_name> = <original_name>;
*/

//! Vector class
/*
part of Standard Template Library (STL)
used to store a list of elements of the same data type
vector<int> v; // vector of integers
unlike arrays, vectors can grow dynamically during program execution
std::vector<int> numbers; // vector of integers inside main function
for (const int & num : numbers){ // range-based for loop
std::cout << num << std::endl;
}
///! Add Elements to a Vector
numbers.push_back(5); // add 5 to the end of the vector
*/