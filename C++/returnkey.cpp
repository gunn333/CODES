#include<iostream>
using namespace std;

//function declaration
double square(double length){
    double area = length * length;
    cout << "Area = " << area << "\n";
    return area;
}

double cube(double length){
    double volume = length * length * length;
    cout << "Volume = " << volume << "\n";
    return volume;
}


int main(){
    /*
    return key is used to return a value from a function
    return some value back to the spot where the function was called
    */
   double length = 5.0; 
   square(length); //function call
   cube(length); //function call
   return 0;
}