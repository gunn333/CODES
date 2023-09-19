#include<iostream>
using namespace std;

//global variable
int myNum = 1;

//Function
void printNum(int myNum){

    /*int myNum = 20;          // will print 20 if used
    */
   myNum = 20;               //will print 1 if used
    cout<<::myNum<<endl;   //not declared in this scope

}

int main(){
    /*
    local variables are declared inside a function
    they can only be accessed inside the function
    Global variables are declared outside of a function
    they can be accessed anywhere in the program
    */
   int myNum = 15; //local variable
   printNum(myNum);
    cout<<::myNum<<endl; //access global variable
    return 0;
    }

    /*Global is the last option to use if there is Local is the first option to use
    a function will always use the local variable first if it is available
    if there is no local variable then it will use the global variable
    :: is the scope resolution operator
    scope variable is used to access a global variable inside a function that has a local variable with the same name
    we should not use global variable because it takes space in memory and is less secure.
    */