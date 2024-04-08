#include <iostream>

using namespace std;

int main() {

  // variables
  int factories[2];
  // inputs
  for (int i = 0; i < sizeof(factories) / sizeof(factories[0]); i++) {
    cout << "Enter # of parts produced for Factory #" << i + 1 << ": ";
    cin >> factories[i];
  }

  cout << endl << "Bar chart" << endl;
  cout << "Each * represents 100 parts" << endl;
  cout << endl;

  for (auto &fact : factories) {
    cout << fact << " produced: ";
    for (int i = 0; i < (fact / 100); i++) {
      cout << "*"
           << " ";
    }
    cout << endl;
  }
}
