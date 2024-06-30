#include "bits/stdc++.h"
using namespace std;
int countTuples(vector<int> &arr) {
  int n = arr.size();
  vector<int> prefix(n);
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] ^ arr[i];
  }
  int count = 0;
  for (int x = 0; x < n; ++x) {
  }
}
int main(void) {}
