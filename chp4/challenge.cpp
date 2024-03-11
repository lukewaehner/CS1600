#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // variables
  int min;
  int max;

  // get inputs
  cout << "Input a minimum number: ";
  cin >> min;

  cout << "Input the maximun number: ";
  cin >> max;

  // setup output
  cout << "Number:          square of number:" << endl;
  cout << "-------          -------------------" << endl;

  // conduct loop
  for (int i = min; i <= max; i++) {
    cout << "   " << i << "                   " << pow(i, 2) << endl;
  }
  return 0; // exit code
}
