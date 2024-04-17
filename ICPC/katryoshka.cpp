#include <iostream>
using namespace std;

int main(void) {
  long long n, m, k;
  cin >> n >> m >> k;

  // Calculate the maximum number of Katryoshkas for each combination
  long long max_k1 = min(n / 2, k);
  long long max_k2 = min(min(n / 2, m), k);
  long long max_k3 = min(min(n, m), k);

  // Find the maximum among the three calculations
  long long max_katryoshkas = max(max_k1, max(max_k2, max_k3));

  cout << max_katryoshkas << endl;

  return 0;
}
