#include "bits/stdc++.h"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, rec;
    cin >> n;
    vector<int> nums(n);
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    arr = nums;
    sort(nums.begin(), nums.end());
    if (nums[0] != nums[1]) {
      rec = nums[0];
    } else {
      rec = nums[n - 1];
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] == rec) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}
