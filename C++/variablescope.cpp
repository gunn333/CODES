#include<iostream>
using namespace std;

//global variable
int myNum = 1;

//Function
void printNum(int myNum){

    /*int myNum = 20;          // will print 20 if used
    */
   myNum = 20;               //will print 1 if used
    cout<<myNum<<endl;   //not declared in this scope

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
    cout<<myNum<<endl; //access global variable
    return 0;
    }

    //Global is the last option to use
    //Local is the first option to use