#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<int> vi(5, 0);
  for (size_t i = 0; i < 5; i++) {
    std::cout << vi[i];
  }
  return 0;
}
