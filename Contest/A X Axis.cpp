#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int points[3] = {x1, x2, x3};
    sort(points, points + 3);

    int a = points[1];

    int total_distance = abs(x1 - a) + abs(x2 - a) + abs(x3 - a);

    cout << total_distance << endl;
  }

  return 0;
}
