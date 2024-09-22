#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  int t;
  long long n;
  long long N;
  int counter = 0;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    N = n;
    counter = 0;
    std::vector<long long> arr;
    for (int i = 2; i * i <= N; i++) {
      if (n % i == 0) {
        counter++;
        n /= i;
        arr.push_back(i);
      }
      if (counter == 2) {
        arr.push_back(n);
        break;
      }
    }
    if (counter < 2) {
      std::cout << "NO" << '\n';
    } else if (arr[0] == arr[2] || arr[1] == arr[2]) {
      std::cout << "NO" << '\n';
    } else {
      std::cout << "YES" << '\n';
      std::cout << arr[0] << " " << arr[1] << " " << arr[2] << '\n';
    }
  }
  return 0;
}
