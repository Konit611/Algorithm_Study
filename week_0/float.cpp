#include <iostream>

using namespace std;

int main() {
  double d = 2.5;
  float f = 1.5f;

  cout << sizeof(d) << endl;
  cout << sizeof(f) << endl;
  cout << d << " " << f << endl;
  cout << d + f << endl;
  cout << d - f << endl;
  cout << d * f << endl;
  cout << d / f << endl;

  int i = 65;
  float g = 5.2f;

  double e = i + g;
  cout << e << endl;

  cout << static_cast<int>(e) << endl;
  cout << static_cast<char>(i) << endl;

  return 0;
}