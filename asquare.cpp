#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    int minX = min({x1, x2, x3, x4});
    int maxX = max({x1, x2, x3, x4});
    int minY = min({y1, y2, y3, y4});
    int maxY = max({y1, y2, y3, y4});

    int side = max(maxX - minX, maxY - minY);

    cout << side * side << '\n';
  }
  return 0;
}
