//! Operator Overloading

#include <iostream>
using namespace std;
int main()
{
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int TotalSeconds = s1 + s2 + m1 * 60 + m2 * 60 + h1 * 3600 + h2 * 3600;
    int h = TotalSeconds / 3600;
    int m = (TotalSeconds % 3600) / 60;
    int s = TotalSeconds % 60;
    cout << h << " " << m << " " << s << endl;

    return 0;
}
