#include <bits/stdc++.h>  // This is a shortcut to include all standard libraries.
using namespace std;

int sentenceLength(string sentence, int index = 0) {
    if (index >= sentence.length()) {
        return 0; // Base case: the end of the string is reached, so the length is 0.
    }
    if (sentence[index] != ' ') {
        return 1 + sentenceLength(sentence, index + 1); // Recursively count non-space characters.
    } else {
        return sentenceLength(sentence, index + 1); // Recurse without counting white spaces.
    }
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); // Input a sentence including spaces.

    cout << "Length (excluding whitespaces): " << sentenceLength(sentence) << endl; // Display the result.
    cout <<"Length (including whitespaces): "<<sentence.length()<<endl; // Display the result.
    return 0;
}
