#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  if (s1 == s2) {
    std::cout << '0' << '\n';
  } else if (s1 > s2) {
    std::cout << '1' << '\n';
  } else {
    std::cout << "-1" << '\n';
  }

  return 0;
}
