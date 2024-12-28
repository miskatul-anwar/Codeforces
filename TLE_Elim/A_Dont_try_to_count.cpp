#include <iostream>
using namespace std;

int subStringCheck(string a, string b) {
  int operation = -1;
  while (a.length() <= 100) {
    operation += 1;
    for (int i = 0; i < a.length(); i++) {
      for (int j = 0; j < b.length(); j++) {
        if (b[j] != a[i + j])
          break;
        else if (j == b.length() - 1) {
          return operation;
        }
      }
    }
    a = a + a;
  }
  return -1;
}

int main() {

  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    string x, y;
    std::cin >> x >> y;
    cout << subStringCheck(x, y) << '\n';
  }
  return 0;
}
