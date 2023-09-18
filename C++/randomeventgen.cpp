#include<iostream>
using namespace std;
#include<ctime>

int main(){
    srand(time(0));
    int randomNum = rand() % 5 + 1;
    switch(randomNum){
        case 1:
        cout << "You win a bumper sticker!\n";
        break;
        case 2:
        cout << "You win a t-shirt!\n";
        break;
        case 3:
        cout << "You win a coffee mug!\n";
        break;
        case 4:
        cout << "You win a book!\n";
        break;
        case 5:
        cout << "You win concert tickets!\n";
        break;
    }
    return 0;
}
//! Random Event Generator
/*
srand(time(0)); this line seeds the random number generator
int randomNum = rand() % 5 + 1; this line generates a random number between 1 and 5
*/