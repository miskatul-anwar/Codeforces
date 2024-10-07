#include <algorithm>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string str1, str2, ans;
  std::cin >> str1 >> str2;
  std::reverse(str1.begin(), str1.end());
  ans = (str1 == str2 ? "YES" : "NO");
  std::cout << ans << '\n';
  return 0;
}
