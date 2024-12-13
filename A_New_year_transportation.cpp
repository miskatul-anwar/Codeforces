#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  int n, t;
  std::cin >> n >> t;
  std::vector<int> cells(n - 1, 0);
  for (int &cell : cells) {
    std::cin >> cell;
  }
  return 0;
}
