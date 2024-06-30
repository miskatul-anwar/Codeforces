#include <iostream>
#include <vector>
int main(int argc, char **argv) {
  int row_a, col_a, row_b, col_b;
  std::vector<std::vector<int>> matrixA(row_a, std::vector<int>(col_a, 0));
  std::vector<std::vector<int>> matrixB(row_b, std::vector<int>(col_b, 0));
  std::vector<std::vector<int>> res(row_a, std::vector<int>(col_b, 0));
  std::cin >> row_a >> col_a;
  for (int i = 0; i < row_a; i++) {
    for (int j = 0; j < col_a; j++) {
      std::cin >> matrixA[i][j];
    }
  }
  std::cin >> row_b >> col_b;
  for (int i = 0; i < row_a; i++) {
    for (int j = 0; j < col_a; j++) {
      std::cin >> matrixB[i][j];
    }
  }

  for (int i = 0; i < row_a; i++) {
    for (int j = 0; j < col_a; j++) {
      for (int k = 0; k < row_a; k++) {
        res[i][j] += matrixA[i][k] * matrixB[k][j];
      }
    }
  }
  for (auto it : res) {
    for (auto it2 : it) {
      std::cout << it2 << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
