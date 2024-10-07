#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string in;
  std::cin >> in;
  int cntU = 0, cntL = 0;
  for (auto i : in) {
    if (i - 'A' <= 25) {
      cntU++;
    } else {
      cntL++;
    }
  }
  if (cntL == cntU or cntL > cntU) {
    std::transform(in.begin(), in.end(), in.begin(), ::tolower);
  } else {
    std::transform(in.begin(), in.end(), in.begin(), ::toupper);
  }
  std::cout << in << '\n';
  return 0;
}
