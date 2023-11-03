#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> Union(int arr1[], int arr2[], int n, int m)
{ // vector function to find the union of two arrays
    set<int> s;
    // set is used to store unique elements and it is sorted in ascending order
    /*
    s is used to store the union of the two arrays
    set is of type int because we are storing integers in it*/
    for (int i = 0; i < n; i++) // array1 ke sare elements ko set me insert kar diya
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    return vector<int>(s.begin(), s.end()); // return the vector of the set
}

void Intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    cout << "Intersection: ";

    while (i < m && j < n) // i < m and j < n because we need to traverse the whole array
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
}

int main()
{
    int n, m;
    cout << "Enter the size of array 1: ";
    cin >> n;
    int arr1[n];

    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of array 2: ";
    cin >> m;
    int arr2[m];

    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> uni = Union(arr1, arr2, n, m);

    cout << "Union: ";
    for (int i = 0; i < uni.size(); i++) // uni.size() can also be written as n+m because the size of the union array is n+m
    {
        cout << uni[i] << " ";
    }

    cout << endl;

    Intersection(arr1, arr2, n, m);

    return 0;
}
