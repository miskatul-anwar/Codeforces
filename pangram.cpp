#include <algorithm>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;
  std::string str;
  std::cin >> str;
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
  std::set<char> check;
  for (auto it : str) {
    check.insert(it);
  }
  std::cout << (check.size() == 26 ? "YES" : "NO");
  return 0;
}
