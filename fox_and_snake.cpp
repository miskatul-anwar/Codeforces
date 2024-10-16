#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  int row, col;
  cin >> row >> col;

  bool right = true;
  string all = string(col, '#') + '\n';
  string righthash = string(col - 1, '.') + "#\n";
  string lefthash = "#" + string(col - 1, '.') + '\n';

  for (int i = 1; i <= row; i++) {
    if (i % 2 != 0) {
      cout << all;
    } else {
      cout << (right ? righthash : lefthash);
      right = !right;
    }
  }
  return 0;
}
