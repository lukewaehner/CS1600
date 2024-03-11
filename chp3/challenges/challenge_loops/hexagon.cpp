#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // find the area of the hexagon
  double side;
  const double pi = 3.14159;

  cout << "What is the length of the one of the sides: ";
  cin >> side;

  double Area = (6 * pow(side, 2)) / (4 * tan(pi / 6));

  cout << "The area of a hexagon with side length: " << side << " is: " << Area
       << endl;
}
