#include <cmath>
#include <iostream>
#include <string>

bool isSquare(int n) {
  int temp = sqrt(n);
  return temp * temp == n;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::string sqstring;
    std::cin >> n;
    std::cin >> sqstring;
    std::string ans = "Yes";

    if (isSquare(n)) {
      int row = sqrt(n);
      for (int i = 0; i < n; i += row) {
        std::string line = sqstring.substr(i, row);

        if (i == 0 || i == n - row) {
          if (line.find('0') != std::string::npos) {
            ans = "No";
          }
        } else {
          if (line[0] != '1' || line[row - 1] != '1') {
            ans = "No";
          }
          std::string zeros = line.substr(1, row - 2);
          if (zeros.find('1') != std::string::npos) {
            ans = "No";
          }
        }

        if (ans == "No")
          break;
      }
    } else {
      ans = "No";
    }
    std::cout << ans << "\n";
  }
  return 0;
}
