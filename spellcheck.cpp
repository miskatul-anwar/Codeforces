#include <algorithm> // for std::sort
#include <iostream>

int main() {
  int t;
  std::cin >> t;
  std::string correct = "Timur";             // the correct spelling
  std::sort(correct.begin(), correct.end()); // sorted version of "Timur"

  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;

    if (n == 5) {
      std::string sorted_s = s;
      std::sort(sorted_s.begin(), sorted_s.end());

      if (sorted_s == correct) {
        std::cout << "YES\n";
      } else {
        std::cout << "NO\n";
      }
    } else {
      std::cout << "NO\n";
    }
  }

  return 0;
}
