#include <iostream>
#include <ostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string s;
  std::string t;
  std::cin >> s >> t;
  std::cout << s.length() << " " << t.length() << '\n';
  std::cout << s << " " << t << '\n';
  return 0;
}
