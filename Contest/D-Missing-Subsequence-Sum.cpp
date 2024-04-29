#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> sequence;
    sequence.push_back(k);
    for (int i = 0; i < n; i++) {
      if (i != k) {
        sequence.push_back(i);
      }
    }
    cout << sequence.size() << endl;
    for (int num : sequence) {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
