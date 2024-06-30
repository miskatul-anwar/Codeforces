#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int main(void) {
  int a, b;
  cin >> a >> b;
  cout << a << " "
       << "+"
       << " " << b << " "
       << "="
       << " " << sum(a, b) << endl;
  cout << a << " "
       << "*"
       << " " << b << " "
       << "="
       << " " << mul(a, b) << endl;
  cout << a << " "
       << "-"
       << " " << b << " "
       << "="
       << " " << sub(a, b) << endl;

  return 0;
}
