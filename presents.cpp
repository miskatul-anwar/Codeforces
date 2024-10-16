#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;
  std::vector<int> vi(n, 0);
  for (int i = 0; i < n; i++) {
    std::cin >> vi[i];
  }
  return 0;
}
