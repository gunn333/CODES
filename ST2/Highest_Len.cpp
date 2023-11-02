/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of contestants: ";
    cin >> n;

    vector<string> names(n);

    cout << "Enter the full names of contestants: ";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    sort(names.begin(), names.end(), [](const string &a, const string &b)
         { return a.length() > b.length(); });

    int uniqueLengths = 0;
    string thirdLongestName;

    for (const string &name : names)
    {
        if (name.length() != thirdLongestName.length())
        {
            thirdLongestName = name;
            uniqueLengths++;
        }
        if (uniqueLengths == 3)
        {
            break;
        }
    }

    cout << "Third highest length string: " << thirdLongestName << endl;

    return 0;
}*/
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of contestants: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer.

    if (n < 3)
    {
        cout << "Not enough contestants to determine the third longest name." << endl;
        return 0;
    }

    string longest = "", secondLongest = "", thirdLongest = "";

    for (int i = 0; i < n; i++) // Loop to take input of names
    {
        string name;
        cout << "Enter the full name of contestant " << i + 1 << ": ";  // i+1 is used to print the number of contestant
        getline(cin, name);

        if (name.length() > longest.length()) //swap the names
        {
            thirdLongest = secondLongest;   
            secondLongest = longest;
            longest = name;
        }
        else if (name.length() > secondLongest.length())
        {
            thirdLongest = secondLongest;
            secondLongest = name;
        }
        else if (name.length() > thirdLongest.length())
        {
            thirdLongest = name;
        }
    }

    cout << "Third highest length string: " << thirdLongest << endl;

    return 0;
}
