#include <iostream>
#include <string>
using namespace std;
int main()
{
    std ::string str;
    std ::cout << "Enter a string -> ";
    std ::getline(std::cin >> std ::ws, str);
    // std::cin.ignore();
    //! Length of the string
    /*
        if(str.length()>12){
            std :: cout << "Length of the string is greater than 12" << std :: endl;
        }
        else{
            std :: cout << "Welcome " <<str << std :: endl;
        }
    */
    //! If the string is empty or not
    /*
            if(str.empty()){
                std :: cout << "String is empty" << std :: endl;
            }
            else{
                std :: cout << "String is not empty " << str << std :: endl;
            }
        ? it cannot work with whitespace string
    */
    //! Clear the string
    /*
    str.clear();
    std :: cout << "String after clearing -> " << str << std :: endl;
    */
    //! Append to the string
    /*
    str.append(" and I am a C++ programmer");
    std ::cout << "String after appending -> " << str << std ::endl;
    */
    //! Find the index of substring
    /*
    std :: string str1 = "C++";
    int index = str.find(str1);
    std :: cout << "Index of substring -> " << index << std :: endl;
    */
    //! Character at a particular index
    /*
        cout << "Character at index 2 -> " << str.at(2) << endl;
    */
    //! Insert a string at a particular index
    /*
        str.insert(2, "++");
        cout << "String after inserting -> " << str << endl;
    */
    //! Erase a string from a particular index
    /*
        str.erase(0, 2);
        cout << "String after erasing -> " << str << endl;
    */
    //! While Loop
    /*
    while (str.empty())
    {
        cout << "Enter your name -> ";
        getline(cin, str);
    }
    cout << "Welcome " << str << endl;
    */
    //! Do While Loop
    /*
    do
    {
        cout << "Enter your name -> ";
        getline(cin, str);
    } while (str.empty());
    */
    //* While (condition) -> if condition is true then only it will execute
    //* Do While (condition) -> it will execute atleast once
    //* For Loop -> it will execute for a particular number of times

    //! For Loop
    /*
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }
    */
    //! For Each Loop
    /*
    for (char c : str)
    {
        cout << c << endl;
    }
    */
    //! Break and Continue
    /*
    break = break out of the loop
    continue = skip the current iteration
    */
    // cout<< str.length()<<endl;
    return 0;
}