#include <iostream>

using namespace std;

double hatSize(double &weight, double &height) {
  return ((weight / height) * 2.9);
};

double jacketSize(double &height, double &weight, int &age) {
  return ((height * weight) / 288) + (((age - 30) / 10) * (1.0 / 8.0));
};

double waistSize(double &weight, int &age) {
  return (weight / 5.7) + (((age - 28) / 2) * (1.0 / 10.0));
};

int main() {

  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(2);

  double weight, height;
  int age;
  cout << "Enter your weight: ";
  cin >> weight;

  cout << "Enter your height in inches: ";
  cin >> height;

  cout << "Enter your age: ";
  cin >> age; // driver code

  cout << endl << "The hat size is: " << hatSize(weight, height) << endl;

  cout << "The jacket size is: " << jacketSize(height, weight, age) << endl;

  cout << "The waist size is: " << waistSize(weight, age) << endl;
  return 0;
}
