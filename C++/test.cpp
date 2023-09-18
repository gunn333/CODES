//! Project to calculate the hypotenuse of a triangle
/*
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    double hyp;
    cout << "Enter the base and height of the triangle -> ";
    cin >> x >> y;
    hyp = sqrt(pow(x,2) + pow(y,2));
    cout << "The hypotenuse of the triangle is " << hyp << endl;
    return 0;
}
*/

//! Project to print month name when number is entered
/*
#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter the number of the month -> ";
    cin >> month;
    if(month == 1){
        cout << "January" << endl;
    }
    else if (month == 2){
        cout << "February" << endl;
    }
    else if (month == 3){
        cout << "March" << endl;
    }
    else if (month == 4){
        cout << "April" << endl;
    }
    else if (month == 5){
        cout << "May" << endl;
    }
    else if (month == 6){
        cout << "June" << endl;
    }
    else if (month == 7){
        cout << "July" << endl;
    }
    else if (month == 8){
        cout << "August" << endl;
    }
    else if (month == 9){
        cout << "September" << endl;
    }
    else if (month == 10){
        cout << "October" << endl;
    }
    else if (month == 11){
        cout << "November" << endl;
    }
    else if (month == 12){
        cout << "December" << endl;
    }
    else{
        cout << "Invalid input" << endl;
    }
    return 0;
}
*/

//! Project to print month name when number is entered using switch statement
/*
#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter the number of the month -> ";
    cin >> month;
    switch(month){
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
    return 0;
}
*/

//! Calculator
/*
#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char op;
    cout << "******************************Calculator******************************\n" << endl;
    cout << "Enter the first number -> ";
    cin >> num1;
    cout << "Enter the second number -> ";
    cin >> num2;
    cout << "Enter the operator -> ";
    cin >> op;
    switch(op){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }
    return 0;
}
*/

//! Temperature conversion
/*
#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout << "Enter the temperature -> ";
    cin >> temp;
    cout << "Enter the unit (C/F) -> ";
    cin >> unit;
    switch(unit){
        case 'C':
            cout << "The temperature in Fahrenheit is " << (temp * 9/5) + 32 << endl;
            break;
        case 'F':
            cout << "The temperature in Celsius is " << (temp - 32) * 5/9 << endl;
            break;
        default:
            cout << "Invalid unit" << endl;
            break;
    }
    return 0;
} */

//!