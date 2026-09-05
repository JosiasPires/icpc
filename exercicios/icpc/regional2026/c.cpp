#include <iostream>

using namespace std;

int main() {
  int t, c, k;
  cin >> t >> c >> k;
  int custo = k*t;
  cout << min(c, custo);
}
