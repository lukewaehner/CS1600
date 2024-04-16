#include <iostream>

using namespace std;

int main() {
  int num = 1234;
  cout << "num %10 (dig 4): " << num % 10 << endl;
  cout << "num / 10 %10 (dig3): " << num / 10 % 10 << endl;
  cout << "num / 100 %10 (dig2): " << num / 100 % 10 << endl;
  cout << "num %1000 (dig1): " << num / 1000 % 10 << endl;
}
