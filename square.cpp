#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << string(i, '*') << '\n';
  }
  return 0;
}
