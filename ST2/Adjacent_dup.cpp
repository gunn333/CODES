#include <iostream>
#include <string>
using namespace std;

string removeAdjacentDuplicates(const string& str) {
    if (str.empty()) {
        return "Empty String";  // Base case: If the string is empty, return "Empty String."
    }

    string result = "";
    int i = 0;

    while (i < str.length()) {
        char currentChar = str[i];
        int count = 0;

        while (i < str.length() && str[i] == currentChar) {
            i++;
            count++;
        }

        if (count == 1) {
            result += currentChar;
        }
    }

    if (result == str) {
        return result;
    } else {
        return removeAdjacentDuplicates(result);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Input: " << str << "\nOutput: " <<  removeAdjacentDuplicates(str) << endl;

    return 0;
}
