#include <bits/stdc++.h>
int main() {
  long long i;
  std::string f, s;
  while (std::cin >> f >> s) {
    long sum1 = 0, sum2 = 0;
    for (i = 0; i < f.size(); i++) {
      if (f[i] >= 'A' && f[i] <= 'Z')
        f[i] = f[i] - 'A' + 97;

      if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 97;
    }
    for (i = 0; i < s.size(); i++) {
      if (f[i] > s[i]) {
        std::cout << "1\n";
        return 0;
      }
      if (s[i] > f[i]) {
        std::cout << "-1\n";
        return 0;
      }
    }
    std::cout << "0\n";
  }
  return 0;
}
