#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum;
    cin>>a>>b;
    sum = a+b;
    int diff;
    diff = abs(a-b);
    cout<<sum<<endl<<diff;
    return 0;
}
