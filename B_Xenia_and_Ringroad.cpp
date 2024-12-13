#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> task(m, 0);
  for (int &i : task) {
    std::cin >> i;
  }
  long long int total = task[0] - 1;
  for (int i = 0; i < m - 1; i++) {
    if (task[i] > task[i + 1]) {
      total += n - (task[i] - task[i + 1]);
    } else if (task[i] < task[i + 1]) {
      total += task[i + 1] - task[i];
    }
  }
  std::cout << total << '\n';
  return 0;
}
