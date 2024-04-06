#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    n *= 2;
    int ar[n + 2];
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }
    sort(ar, ar + n);
    int i = 0, j = n - 1, count = 0;
    while (i <= j) {
      if (count % 2 == 0) {
        cout << ar[j] << " ";
        j--;
      } else {
        cout << ar[i] << " ";
        i++;
      }
      count++;
    }
  }
  return 0;
}
