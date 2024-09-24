#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  std::string input;
  std::cin >> input;
  std::vector<int> us;
  for (int i = 0; i < input.size(); i++) {
    char tmp = input[i];
    if (tmp != '+') {
      us.push_back(tmp - '0');
    }
  }
  std::sort(us.begin(), us.end());
  std::string output;
  for (auto i : us) {
    output += i + '0';
    output += '+';
  }
  output[output.size() - 1] = ' ';
  std::cout << output << ' ';
  return 0;
}
