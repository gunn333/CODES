#include <iostream>
#include <vector>
using namespace std;
void Outperform(vector<int> scores, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && scores[i] < scores[j])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            cout << scores[i] << " "; // Outperformed scores
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << scores[i] << " "; // Original array
    }
    cout << endl;
    cout << " Outperformed: ";
    Outperform(scores, n);
}