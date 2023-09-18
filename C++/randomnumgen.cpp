#include<iostream>
#include<ctime>
using namespace std;
//These are pseudo-random number not true random numbers(but close enough)
int main(){
    srand(time(NULL));
    int num = (rand() % 6)+ 1;
    cout << num << endl;
}
//! This is a random number generator
/*
we need to initailize the random number generator by using srand() function
srand() takes a seed value as an argument
the seed value is used to generate the random number
if we use the same seed value we will get the same random number
we can use the time() function to get the current time as a seed value
store first random number in a variable num 
to get a random number between 1 and 6 we use the modulus operator (0 to 5)
we add 1 to the result to get a number between 1 and 6 (1 to 6)
using rand() we can get a random number between 0 and 32767
*/