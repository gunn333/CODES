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

//! A number is prime or not
/*
#include <iostream>
using namespace std;
int main()
{
    /// Number input
    int num;
    cout << "Enter the number -> ";
    cin >> num;
    bool flag = 0; // yeah pata karne ke liye ke hum for loop break kr ke aa rhe hain ya complete krke aa rhe hain

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "The number is not prime" << endl;
            flag = 1;
            break;
        }
    }

    /// Flag ==0 ka matlab main for loop complete krke aa rha hun

    if (flag == 0)
    {
        cout << "The number is prime" << endl;
    }
    return 0;
}

ALternate:
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            return 0;
        }
    }
    cout << n << " is a prime number";
    return 0;
}

Alternate:

#include <iostream>
    using namespace std;
    int main()
    {
        int num;
        cin >> num;
        bool isprime = true;
        for (int i = 2 ; i<num;i++){
            if(num%i == 0) {
                isprime = false;
            }
        }
        if(isprime){
            cout <<"Prime number";
        }
        else {
            cout << "Not a prime number";
        }
    return 0;
}
*/

//! Reverse a number
/*
#include<iostream>
using namespace std;
int main(){
    /// Number input
    int num;
    cin>>num;
    int reverse=0;  ///Ismein Reverse number store hoga
    while(num>0){
        int lastdigit = num%10;
        reverse = reverse*10 + lastdigit;
        num = num/10; ///Isse last digit hat jayega
    }
    cout<<"Reverse of Num: " <<reverse<<endl;
}
*/

//! If a number is Armstrong number or not
/*
153
1*1*1 = 1
5*5*5 = 125
3*3*3 = 27
1+125+27 = 153

#include <iostream>
using namespace std;
int main()
{
    int num; /// Number input
    cin >> num;
    /*
    Jaise hum reverse mein last digit nikal rahe the vaise hi hum yahan pe bhi last digit nikalenge
    aur fir unka cube find krna and then add krna hai sum mein
    then hume check krna hai ke sum == num hai ya nahi aur num humne while loop mein divide kr kr ke 0 kr diya hai
    create another variable original number and store num in it

    int sum = 0;
    int originalnum = num;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += lastdigit * lastdigit * lastdigit;
        num = num / 10; /// Isse last digit hat jayega
    }
    if (sum == originalnum)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}
*/

//! Palindrome Number
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int rev =0;
    int orig = num;
    while(num>0){
        int lastdigit = num % 10;
        rev = rev*10 +lastdigit;
        num = num / 10;
    }
    if(orig == rev){
        cout <<"Palindrome";
        return 0;
    }
    else{
        cout <<"Not palindrome";
    }
    return 0;
}
*/
/*
#include <iostream>
#include <algorithm>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    // Sort the array before performing binary search
    std::sort(arr, arr + size);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
*/

//! Power of 2 Leeetcode problem
/*
Question was if the given number is a power of 2 or not
num  = 4
num - 1 = 3
binary of 4 = 100
binary of 3 = 011
100 & 011 = 0
only 1 & 1 = 1 rest all 0
if num is power of 2 then num & num-1 = 0

#include <iostream>
using namespace std;

bool isPowerOfTwo(int x) // x is the number n
{
    if (x > 0) // Zero and negative numbers are not allowed
    {
        if ((x & (x - 1)) == 0) // using & operator
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPowerOfTwo(n))
        cout << "true" << endl;
    else
        cout << n << "false" << endl;
    return 0;
}
*/

//! Swap Alternate Elements of Array
/*
#include<iostream>
#include<utility>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {1,2,3,4,5};

    swapAlternate(even,8);
    //Print even array
    for(int i=0;i<8;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    swapAlternate(odd,5);
    //Print odd array
    for(int i=0;i<5;i++){
        cout<<odd[i]<<" ";
    }
    return 0;
}
*/

//! Maximum Chocolates
/*
// apke paas 15 rupees hai aur ek chocolate ki price 1 rupee hai
// 3 chocolate wrappers se ek chocolate free mein milegi
// kitni chocolate kha paoge
// 15 chocolates = 15 wrappers = 15/3 = 5 chocolates
// 5 chocolates = 5 wrappers = 5/3 = 1 chocolate,2 wrappers
// 1 chocolate = 1 wrapper , 2 wrappers = 3/3 = 1 chocolate
#include <iostream>
using namespace std;
int main(){
    int money; //15
    cin>>money;
    int price; //1
    cin>>price;
    int total_chocolate = money/price; //15
    int wrapper = total_chocolate; //15
    while(wrapper>=3){
        int newchocolate = wrapper/3;
        total_chocolate += newchocolate;
        wrapper = wrapper%3 + newchocolate;  //15%3 = 0 + 5 = 5 // wrapper ab 5 hai and so on
    cout<<total_chocolate<<endl;
    return 0;
}
}
/*

//! Frequency of an element in an array
/*
#include <iostream>
using namespace std;
int main(){
    return 0;
}
*/

//! Sum of first n natural numbers
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;     // i is 1 because we have to start from 1 and not 0
    while (i <= n) // 5 = 1 + 2 + 3 + 4 + 5 = 15
    {
        sum += i;
        i++;
    }
    cout << sum << endl;
    return 0;
}
*/
//! Find Duplicate element in array
//! Array Intersection
//! Pair Sum Problem
//! Triplet Sum Problem
//! Sort 0's and 1's in an array
//! Sort 0's, 1's and 2's in an array
//! Rotate an array
//! 2D Arrays
//! Wave Print
//! Spiral Print
//! Matrix Multiplication
//! Search in a 2D array
//! Staircase Search