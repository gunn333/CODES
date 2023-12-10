//! Project to calculate the hypotenuse of a triangle
/*
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    double hyp;
    cout << "Enter the base and height of the triangle -> ";
    cin >> x >> y;
    hyp = sqrt(pow(x,2) + pow(y,2));
    cout << "The hypotenuse of the triangle is " << hyp << endl;
    return 0;
}
*/

//! Project to print month name when number is entered
/*
#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter the number of the month -> ";
    cin >> month;
    if(month == 1){
        cout << "January" << endl;
    }
    else if (month == 2){
        cout << "February" << endl;
    }
    else if (month == 3){
        cout << "March" << endl;
    }
    else if (month == 4){
        cout << "April" << endl;
    }
    else if (month == 7){
        cout << "May" << endl;
    }
    else if (month == 6){
        cout << "June" << endl;
    }
    else if (month == 7){
        cout << "July" << endl;
    }
    else if (month == 8){
        cout << "August" << endl;
    }
    else if (month == 9){
        cout << "September" << endl;
    }
    else if (month == 10){
        cout << "October" << endl;
    }
    else if (month == 11){
        cout << "November" << endl;
    }
    else if (month == 12){
        cout << "December" << endl;
    }
    else{
        cout << "Invalid input" << endl;
    }
    return 0;
}
*/

//! Project to print month name when number is entered using switch statement
/*
#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter the number of the month -> ";
    cin >> month;
    switch(month){
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 7:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
    return 0;
}
*/

//! Calculator
/*
#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char op;
    cout << "******************************Calculator******************************\n" << endl;
    cout << "Enter the first number -> ";
    cin >> num1;
    cout << "Enter the second number -> ";
    cin >> num2;
    cout << "Enter the operator -> ";
    cin >> op;
    switch(op){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }
    return 0;
}
*/

//! Temperature conversion
/*
#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout << "Enter the temperature -> ";
    cin >> temp;
    cout << "Enter the unit (C/F) -> ";
    cin >> unit;
    switch(unit){
        case 'C':
            cout << "The temperature in Fahrenheit is " << (temp * 9/7) + 32 << endl;
            break;
        case 'F':
            cout << "The temperature in Celsius is " << (temp - 32) * 7/9 << endl;
            break;
        default:
            cout << "Invalid unit" << endl;
            break;
    }
    return 0;
} */

//! A number is prime or not
/*
#include <iostream>
using namespace std;
int main()
{
    /// Number input
    int num;
    cout << "Enter the number -> ";
    cin >> num;
    bool flag = 0; // yeah pata karne ke liye ke hum for loop break kr ke aa rhe hain ya complete krke aa rhe hain

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "The number is not prime" << endl;
            flag = 1;
            break;
        }
    }

    /// Flag ==0 ka matlab main for loop complete krke aa rha hun

    if (flag == 0)
    {
        cout << "The number is prime" << endl;
    }
    return 0;
}

ALternate:
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            return 0;
        }
    }
    cout << n << " is a prime number";
    return 0;
}

Alternate:

#include <iostream>
    using namespace std;
    int main()
    {
        int num;
        cin >> num;
        bool isprime = true;
        for (int i = 2 ; i<num;i++){
            if(num%i == 0) {
                isprime = false;
            }
        }
        if(isprime){
            cout <<"Prime number";
        }
        else {
            cout << "Not a prime number";
        }
    return 0;
}
*/

//! Reverse a number
/*
#include<iostream>
using namespace std;
int main(){
    /// Number input
    int num;
    cin>>num;
    int reverse=0;  ///Ismein Reverse number store hoga
    while(num>0){
        int lastdigit = num%10;
        reverse = reverse*10 + lastdigit;
        num = num/10; ///Isse last digit hat jayega
    }
    cout<<"Reverse of Num: " <<reverse<<endl;
}
*/

//! If a number is Armstrong number or not
/*
153
1*1*1 = 1
7*7*7 = 125
3*3*3 = 27
1+125+27 = 153

#include <iostream>
using namespace std;
int main()
{
    int num; /// Number input
    cin >> num;
    /*
    Jaise hum reverse mein last digit nikal rahe the vaise hi hum yahan pe bhi last digit nikalenge
    aur fir unka cube find krna and then add krna hai sum mein
    then hume check krna hai ke sum == num hai ya nahi aur num humne while loop mein divide kr kr ke 0 kr diya hai
    create another variable original number and store num in it

    int sum = 0;
    int originalnum = num;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += lastdigit * lastdigit * lastdigit;
        num = num / 10; /// Isse last digit hat jayega
    }
    if (sum == originalnum)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}
*/

//! Palindrome Number
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int rev =0;
    int orig = num;
    while(num>0){
        int lastdigit = num % 10;
        rev = rev*10 +lastdigit;
        num = num / 10;
    }
    if(orig == rev){
        cout <<"Palindrome";
        return 0;
    }
    else{
        cout <<"Not palindrome";
    }
    return 0;
}
*/
/*
#include <iostream>
#include <algorithm>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 7, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Sort the array before performing binary search
    sort(arr, arr + size);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
*/

//! Power of 2 Leeetcode problem
/*
Question was if the given number is a power of 2 or not
num  = 4
num - 1 = 3
binary of 4 = 100
binary of 3 = 011
100 & 011 = 0
only 1 & 1 = 1 rest all 0
if num is power of 2 then num & num-1 = 0

#include <iostream>
using namespace std;

bool isPowerOfTwo(int x) // x is the number n
{
    if (x > 0) // Zero and negative numbers are not allowed
    {
        if ((x & (x - 1)) == 0) // using & operator
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPowerOfTwo(n))
        cout << "true" << endl;
    else
        cout << n << "false" << endl;
    return 0;
}
*/

//! Swap Alternate Elements of Array
/*
#include<iostream>
#include<utility>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8] = {1,2,3,4,7,6,7,8};
    int odd[7] = {1,2,3,4,7};

    swapAlternate(even,8);
    //Print even array
    for(int i=0;i<8;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    swapAlternate(odd,7);
    //Print odd array
    for(int i=0;i<7;i++){
        cout<<odd[i]<<" ";
    }
    return 0;
}
*/

//! Maximum Chocolates
/*
// apke paas 15 rupees hai aur ek chocolate ki price 1 rupee hai
// 3 chocolate wrappers se ek chocolate free mein milegi
// kitni chocolate kha paoge
// 15 chocolates = 15 wrappers = 15/3 = 7 chocolates
// 7 chocolates = 7 wrappers = 7/3 = 1 chocolate,2 wrappers
// 1 chocolate = 1 wrapper , 2 wrappers = 3/3 = 1 chocolate
#include <iostream>
using namespace std;
int main(){
    int money; //15
    cin>>money;
    int price; //1
    cin>>price;
    int total_chocolate = money/price; //15
    int wrapper = total_chocolate; //15
    while(wrapper>=3){
        int newchocolate = wrapper/3;
        total_chocolate += newchocolate;
        wrapper = wrapper%3 + newchocolate;  //15%3 = 0 + 7 = 7 // wrapper ab 7 hai and so on
    cout<<total_chocolate<<endl;
    return 0;
}
}
/*

//! Frequency of an element in an array
/*
#include <iostream>
using namespace std;
int main(){
    return 0;
}
*/

//! Sum of first n natural numbers
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;     // i is 1 because we have to start from 1 and not 0
    while (i <= n) // 7 = 1 + 2 + 3 + 4 + 7 = 15
    {
        sum += i;
        i++;
    }
    cout << sum << endl;
    return 0;
}
*/
//! Find Duplicate element in array
//! Array Intersection
//! Pair Sum Problem
//! Triplet Sum Problem
//! Sort 0's and 1's in an array
//! Sort 0's, 1's and 2's in an array
//! Rotate an array
//! 2D Arrays
//! Wave Print
//! Spiral Print
//! Matrix Multiplication
//! Search in a 2D array
//! Staircase Search
/*
#include <iostream>

using namespace std;

void generateMatrix(int A) {
    int matrix[A][A];
    int num = 1;
    int left = 0, right = A - 1, top = 0, bottom = A - 1;

    while (num <= A * A) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Traverse from right to left
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        // Traverse from bottom to top
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    // Print the generated matrix
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < A; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A;
    cout << "Enter the value of A: ";
    cin >> A;

    generateMatrix(A);

    return 0;
}
*/
// #include <iostream>

// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     long long cumulativeDurations[N + 1] = {0}; // Cumulative durations, initialized with 0
//     int songFrequency[N];

//     // Input the playlist description
//     for (int i = 0; i < N; i++) {
//         int K, T;
//         cin >> K >> T;
//         cumulativeDurations[i + 1] = cumulativeDurations[i] + static_cast<long long>(K) * T;
//         songFrequency[i] = K;
//     }

//     // Input the moments
//     long long moments[M];
//     for (int i = 0; i < M; i++) {
//         cin >> moments[i];
//     }

//     // Find the song number for each moment
//     for (int i = 0; i < M; i++) {
//         long long moment = moments[i];

//         int left = 0, right = N;
//         while (left < right) {
//             int mid = left + (right - left) / 2;
//             if (cumulativeDurations[mid] < moment) {
//                 left = mid + 1;
//             } else {
//                 right = mid;
//             }
//         }

//         int songNumber = left;
//         long long prevDuration = cumulativeDurations[songNumber - 1];
//         long long songDuration = songFrequency[songNumber - 1] * (moment - prevDuration);

//         cout << songNumber << "\n";
//     }

//     return 0;

// }
/*
#include <iostream>

int main() {
    int N, M;
    cin >> N >> M;

    int playlist[N];
    int moments[M];
    long long songDuration[N];
    // Input the play list
    for (int i = 0; i < N; i++) {
        cin >> playlist[i];
        cin >> songDuration[i];
    }

    // Calculate the prefix sum of song durations
    long long prefixSum[N];
    prefixSum[0] = static_cast<long long>(playlist[0]) * songDuration[0];
    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + static_cast<long long>(playlist[i]) * songDuration[i];
    }

    // Input the moments
    for (int i = 0; i < M; i++) {
        cin >> moments[i];
    }

    // Find the song playing at each moment
    for (int i = 0; i < M; i++) {
        long long moment = moments[i];
        int songNumber = -1;

        // Binary search to find the song
        int left = 0, right = N - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (moment <= prefixSum[mid]) {
                songNumber = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Adjust for the moment within the current song
        if (songNumber > 0) {
            moment -= prefixSum[songNumber - 1];
        }

        // Calculate the song at the moment and print on a new line
        songNumber += 1;
        cout << songNumber << endl;
    }

    return 0;
}*/
/*
#include <iostream>

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    int arr[N];
    int matrix[X][Y];

    // Input the 1D array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (N != X * Y) {
        cout << "Invalid input: The dimensions do not match the array size." << endl;
        return 1;
    }

    int index = 0;

    // Fill the 2D matrix
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            matrix[i][j] = arr[index];
            index++;
        }
    }

    // Output the 2D matrix
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            cout << matrix[i][j];
            if (j < Y - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
*/
/*
#include <iostream>

int main() {
    int m, n;
    cin >> m >> n;

    int mat[m][n];

    // Input the boolean matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Create arrays to keep track of rows and columns to be set to 1
    bool rowToSet[m] = {false};
    bool colToSet[n] = {false};

    // Determine which rows and columns need to be set to 1
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                rowToSet[i] = true;
                colToSet[j] = true;
            }
        }
    }

    // Modify the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (rowToSet[i] || colToSet[j]) {
                mat[i][j] = 1;
            }
        }
    }

    // Output the modified matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
*/
/*
#include <iostream>

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    int arr[N];
    int matrix[X][Y];

    // Input the 1D array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (N != X * Y) {
        cout << "Invalid input: The dimensions do not match the array size." << endl;
        return 1;
    }

    int index = 0;

    // Fill the 2D matrix
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            matrix[i][j] = arr[index];
            index++;
        }
    }

    // Output the 2D matrix
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            cout << matrix[i][j];
            if (j < Y - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main () {
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 int count1 = 0, count0=0;
 for(int i=0;i<n;i++){
 if(arr[i] == 1) count1++;
 if(arr[i] == 0) count0++;
 }
 int ans;
 if(count0 < count1) ans = count0*2;
 else ans = count1*2;
 cout<<ans;
 return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
 int n;
 cin >> n;
 int matrix[n][n];
 int num = 1;
 int left = 0, right = n - 1, top = 0, bottom = n - 1;
 while (left <= right && top <= bottom) {
 for (int i = left; i <= right; i++) {
 matrix[top][i] = num++;
 }
 top++;
 for (int i = top; i <= bottom; i++) {
 matrix[i][right] = num++;
 }
 right--;
 for (int i = right; i >= left; i--) {
 matrix[bottom][i] = num++;
 }
 bottom--;
 for (int i = bottom; i >= top; i--) {
 matrix[i][left] = num++;
 }
 left++;
 }
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 cout << matrix[i][j] << " ";
 }
 cout << endl;
 }
 return 0;
}
*/

// include<iostream>
// using namespace std;
// void Rotate(int *arr,int len){
//  int lastElm = arr[len-1];
//  for(int i=len-2;i>=0;i--){
//  arr[i+1] = arr[i];
//  }
//  arr[0] = lastElm;
// }
// int main(){
//  int n,r;
//  cin>>n>>r;
//  int arr[n];
//  for(int i=0;i<n;i++){
//  cin>>arr[i];
//  }
//  for(int i=0;i<r;i++){
//  Rotate(arr,n);
//  }
//  for(int i=0;i<n;i++){
//  cout<<arr[i]<<" ";
//  }
// }
/*
#include<iostream>
#include<vector>
using namespace std;

void Rotate(vector<int> &arr, int len) {
    int lastElm = arr[len - 1];
    for (int i = len - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = lastElm;
}

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> arr(n); // Using a vector instead of an array

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < r; i++) {
        Rotate(arr, n);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

// #include<iostream>
// using namespace std;
// int main() {
//  int size;
//  cin>>size;

//  int arr[size];
//  for(int i=0;i<size;i++){
//  cin>>arr[i];
//  }

//  int A=0,B=0;
//  for(int i=0;i<size;i++){
//  if(i%2==0){
//  A = A + arr[i];
//  }else{
//  B = B + arr[i];
//  }
//  }
//  cout<<A<<" "<<B;
//  return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int m, n;
//     cin >> m >> n;
//     int arr[m][n];

//     // Taking input for the 2D array
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Wave print row-wise
//     for(int i = 0; i < m; i++) {
//         // For even rows, print left to right
//         if(i % 2 == 0) {
//             for(int j = 0; j < n; j++) {
//                 cout << arr[i][j];
//                 if(j != n - 1 || (j == n - 1 && i != m - 1)) {
//                     cout << ", ";
//                 }
//             }
//         }
//         // For odd rows, print right to left
//         else {
//             for(int j = n - 1; j >= 0; j--) {
//                 cout << arr[i][j];
//                 if(j != 0 || (j == 0 && i != m - 1)) {
//                     cout << ", ";
//                 }
//             }
//         }
//     }

//     cout << ", END" << endl;
//     return 0;
// }
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target, start = -1, end = -1;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target and start == -1)
        {
            start = i;
        }
        else if (start != -1 and end == -1 and arr[i] != target)
        {
            end = i - 1;
        }
    }

    cout << start << " " << end;
}
*/
/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
#define ll long long
ll find_idx(ll *a, ll n, ll key)
{
    ll s = 0;
    ll e = n - 1;
    while (s <= e)
    {
        ll mid = (s + e) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}
void compute(ll *a, ll n, ll m)
{
    ll min_diff = INT_MAX;
    ll rose_1, rose_2;
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];
        ll y = m - a[i];
        int j = find_idx(a, n, y);
        if ((i != j) && (j >= 0 && j < n) && (abs(x - y) < min_diff))
        {
            rose_1 = x;
            rose_2 = y;
            min_diff = abs(x - y);
        }
    }
    ll x = rose_1, y = rose_2;
    rose_1 = min(x, y);
    rose_2 = max(x, y);
    cout << "Deepak should buy roses whose prices are " << rose_1 << " and " << rose_2 << "." << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll m;
        cin >> m;
        string str;
        getline(cin, str);
        sort(a, a + n);
        compute(a, n, m);
    }
    return 0;
}
*/

// #include <iostream>
// #include <algorithm>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cin >> k;
//     sort(arr, arr + n);

//     for (int i = 0; i < n - 3; i++) {
//         if (i > 0 && arr[i] == arr[i - 1]) continue;

//         for (int j = i + 1; j < n - 2; j++) {
//             if (j != i + 1 && arr[j] == arr[j - 1]) continue;

//             int low = j + 1, high = n - 1;
//             while (low < high) {
//                 int sum = arr[i] + arr[j] + arr[low] + arr[high];

//                 if (sum == k) {
//                     cout << arr[i] << " " << arr[j] << " " << arr[low] << " " << arr[high] << endl;
//                     while (low < high && arr[low] == arr[low + 1]) low++;
//                     while (low < high && arr[high] == arr[high - 1]) high--;
//                     low++;
//                     high--;
//                 } else if (sum < k) {
//                     low++;
//                 } else {
//                     high--;
//                 }
//             }
//         }
//     }

//     return 0;
// }
/*
#include <iostream>
#include <string>
using namespace std;

int stringToInt(string str) {
    if (str.L() == 0) {
        return 0;
    }

    int lastDigit = str.back() - '0';
    str.pop_back();
    int num = stringToInt(str);

    return num * 10 + lastDigit;
}

int main() {
    string str;
    cin >> str;

    int result = stringToInt(str);

    cout << result << endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class rhombus
{
    int Sides;
    int Dig_1;
    int Dig_2;

public:
    rhombus()
    {
        Sides = 0;
        Dig_1 = 0;
        Dig_2 = 0;
    }
    rhombus(int s, int d1, int d2)
    {
        Sides = s;
        Dig_1 = d1;
        Dig_2 = d2;
    }
    void display() const
    {

        cout << "Sides:" << Sides << endl;
        cout << "Diganonal number 1 : " << Dig_1 << endl;
        cout << "Diagonal Number 2 : " << Dig_2 << endl;
        cout << endl;
    }
    void area()
    {
        cout << "Area of Rhombus : " << (Dig_1 * Dig_2) / 2 << endl;
    }
    void peri()
    {
        cout << "Perimeter of Rhombus :" << 4 * Sides << endl;
    }
};
int main()
{
    rhombus s(4, 7, 9);
    s.display();
    s.area();
    s.peri();
    return 0;
}
*/
/*
int main() {
    rhombus defaultRhombus; // Creating a default object using the default constructor
    defaultRhombus.disp();  // Displaying the default object's values using the disp() function
    defaultRhombus.ar();    // Calculating and displaying the area of the default object
    defaultRhombus.per();   // Calculating and displaying the perimeter of the default object
    return 0;
}
*/

//! Create a class Shape with method getArea(), inherit two classes: Square and Circle from Shape and override the getArea() method from Shape in Square and Circle to Calculate the area of Circle and Square by creating an instance of both Square and Circle in cpp

#include<iostream>
using namespace std;
class Shape {
public:
    virtual double getArea() const {    // Virtual function is
        return 0.0;  // Default implementation for the base class
    }
};

class Square : public Shape {
private:
    double Sides;

public:
    Square(double s) : Sides(s) {}

    double getArea() const override {
        return Sides * Sides;  // Area of a square
    }
};

class Circle : public Shape {
private:
    double Rad;

public:
    Circle(double r) : Rad(r) {}

    double getArea() const override {
        return 3.14 * Rad * Rad;  // Area of a circle
    }
};

int main() {
    Square square(7.0);
    Circle circle(2.0);

    cout << "Area of Square: " << square.getArea() << endl;
    cout << "Area of Circle: " << circle.getArea() << endl;

    return 0;
}