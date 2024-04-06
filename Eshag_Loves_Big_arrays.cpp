#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long avg = 0;
    long long arr[n + 3];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    avg = arr[0];
    int cnt = 1;
    for (int i = 0; i < n; i++) {
      if (avg == arr[i]) {
        cnt++;
      } else {
        break;
      }
    }
    cout << n - cnt << endl;
  }
}
