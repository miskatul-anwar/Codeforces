#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void stab(vector<vector<int>> &matrix, int n, int m) {
  bool changed;
  do {
    changed = false;
    vector<vector<int>> new_matrix = matrix;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        int top = (i > 0) ? matrix[i - 1][j] : 0;
        int left = (j > 0) ? matrix[i][j - 1] : 0;
        int bottom = (i < n - 1) ? matrix[i + 1][j] : 0;
        int right = (j < m - 1) ? matrix[i][j + 1] : 0;
        int max_neighbor = max({top, left, bottom, right});
        if (matrix[i][j] > max_neighbor) {
          new_matrix[i][j] = max_neighbor;
          changed = true;
        }
      }
    }
    matrix = new_matrix;
  } while (changed);
}

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> matrix[i][j];
      }
    }
    stab(matrix, n, m);
    for (const auto &row : matrix) {
      for (int val : row) {
        cout << val << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}
