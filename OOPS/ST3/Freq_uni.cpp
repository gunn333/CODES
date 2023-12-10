#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
sort(arr.begin(), arr.end());
vector<int> res;
int count = 1;
for (int i = 1; i < n; i++) {
if (arr[i] == arr[i - 1]) {
count++;
} else {
res.push_back(count);
count = 1;
}

}
res.push_back(count);
for (auto i : res) {
cout << i << " ";
}
return 0;
}
