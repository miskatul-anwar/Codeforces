#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;
  std::vector<std::string> rec(n, "0");
  for (size_t i = 0; i < n; i++) {
    std::cin >> rec[i];
  }
  std::string team1 = rec[0];
  std::string team2 = "";
  int cnt_1 = 0, cnt_2 = 0;
  for (auto i : rec) {
    if (i == team1) {
      cnt_1++;
    } else {
      cnt_2++;
    }
  }
  for (auto i : rec) {
    if (i != team1) {
      team2 = i;
      break;
    }
  }
  std::cout << (cnt_1 > cnt_2 ? team1 : team2);
  return 0;
}
