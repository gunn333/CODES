#include<iostream>
using namespace std;

void HappyBirthday(){    //void function_name() {function body}
    cout              << "Happy Birthday to you!\n";
    cout << "Happy Birthday to you!\n";
    cout << "Happy Birthday dear user!\n";
    cout << "Happy Birthday to you!\n";
}
int main(){
    /*
    function = a block of code that is executed whenever it is called upon
    function prototype = a function declaration that tells the compiler about a function's name, return type, and parameters
    function definition = the actual body of the function
    function call = the code used to pass control to a function
    function header = the first line of a function definition
    function body = the block of code that performs the task
    function name = the name of the function
    parameter list = the list of parameters in a function definition
    parameter = a variable that receives data from an argument passed into a function
    argument = a value that is passed into a function when the function is called
    return type = the data type of the value a function returns to the calling program
    return value = the value a function returns to the calling program
    void = a keyword that indicates a function does not return a value
    value-returning function = a function that returns a value
    void function = a function that does not return a value
    local variable = a variable that is declared inside a function
    global variable = a variable that is declared outside all functions
    scope = the part of a program in which a variable may be accessed
    local scope = the part of a program in which a local variable may be accessed
    global scope = the part of a program in which a global variable may be accessed
    */
    HappyBirthday(); //function call
    // can call the function as many times as you want
    
    return 0;
}