#include <iostream>
#include <set>
#include <vector>
int main(int argc, char *argv[]) {
  int yr;
  std::cin >> yr;
  while (true) {
    int tmp = ++yr;
    std::vector<int> digits;
    std::set<int> check;
    for (int i = 0; i < 4; i++) {
      digits.push_back(tmp % 10);
      check.insert(tmp % 10);
      tmp /= 10;
    }
    if (digits.size() == check.size()) {
      break;
    }
  }
  std::cout << yr << '\n';
  return 0;
}
