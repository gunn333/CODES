#include <iostream>
using namespace std;
int factorial(int n) // if there are 2 arguments  like n and fact then during nCr as well we have to pass fact as well
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    return num / den;
}

int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    cout << nCr(n, r) << endl;
    return 0;
}