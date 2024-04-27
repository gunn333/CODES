#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
    int a;
    long int b;
    char c;
    float d;
    double e;
    float f;
    double g;

    cout << "Enter an integer: ";
    // Input
    cin >> a >> b >> c >> d >> e >> f >> g;

    // Output
    cout << "You entered: " << a << endl;
    cout << "You entered: " << b << endl;
    cout << "You entered: " << c << endl;
    cout << "You entered: " << fixed << setprecision(3) << d << endl;
    cout << "You entered: " << fixed << setprecision(3) << e << endl;
    cout << "You entered: " <<  setprecision(3) << f << endl;
    cout << "You entered: " <<  setprecision(3) << g << endl;
    */
    double n = 42.12345678;
    cout << "5 : " << setprecision(5) << n << endl;
    cout << "4 : " << setprecision(4) << n << endl;
    cout << "3 : " << setprecision(3) << n << endl;
    cout << "2 : " << setprecision(2) << n << endl;
    cout << "1 : " << setprecision(1) << n << endl;
    cout << "0 : " << setprecision(0) << n << endl;
    cout << "With fixed 5 : " << fixed << setprecision(5) << n << endl;
    cout << "With fixed 4 : " << fixed << setprecision(4) << n << endl;
    cout << "With fixed 3 : " << fixed << setprecision(3) << n << endl;
    cout << "With fixed 2 : " << fixed << setprecision(2) << n << endl;
    cout << "With fixed 1 : " << fixed << setprecision(1) << n << endl;
    cout << "With fixed 0 : " << fixed << setprecision(0) << n << endl;
    return 0;
}
