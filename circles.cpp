#include <cmath>
#include <iostream>

const double EPS = 1e-9;

double distance(double px1, double py1, double px2, double py2) {
  return sqrt((px2 - px1) * (px2 - px1) + (py2 - py1) * (py2 - py1));
}

int main(int argc, char *argv[]) {
  double x1, x2, x3, x4, y1, y2, y3, y4, c1x, c2x, c1y, c2y, r1, r2, d;

  std::cin >> x1 >> y1 >> x2 >> y2;
  std::cin >> x3 >> y3 >> x4 >> y4;

  c1x = (x1 + x2) / 2;
  c1y = (y1 + y2) / 2;
  c2x = (x3 + x4) / 2;
  c2y = (y3 + y4) / 2;

  r1 = distance(x1, y1, x2, y2) / 2;
  r2 = distance(x3, y3, x4, y4) / 2;

  d = distance(c1x, c1y, c2x, c2y);

  if (d > r1 + r2) {
    std::cout << "NO" << '\n';
  } else {
    std::cout << "YES" << '\n';
  }

  return 0;
}

