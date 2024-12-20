#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> matrix(25);

  for (int &a : matrix) {
    std::cin >> a;
  }

  int row = -1, col = -1;
  for (int i = 0; i < 25; ++i) {
    if (matrix[i] == 1) {
      row = i / 5;
      col = i % 5;
      break;
    }
  }

  int moves = std::abs(row - 2) + std::abs(col - 2);
  std::cout << moves << std::endl;

  return 0;
}
