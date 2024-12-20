#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  int n, cnt = 0;
  std::string s;
  std::cin >> n >> s;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      cnt++;
    }
  }
  std::cout << cnt << '\n';
  return 0;
}
