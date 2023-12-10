//! Check a number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "Not Prime";
        return 0;
    }
    bool is_prime = true;
    for (int i = 2; i <= n / 2; ++i) // n/2 is used because a number is not divisible by a number greater than its half
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }

    }
}