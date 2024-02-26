#include <iostream>
using namespace std;

int main() {

  int month, counter;
  cout << "Enter a month 1-12: ";
  cin >> month;

  switch (month) {
  case 1:
    cout << "JAN" << endl;

    counter = 5;
    while (counter > 0) {
      cout << "January is very cold" << endl;
      counter--;
    }

    break;

  case 2:
    cout << "FEB" << endl;
    break;

  case 3:
    cout << "MAR" << endl;
    break;

  default:
    cout << "Error : The month number is invalid!" << endl;
    break;
  }

  cout << "Ended switch" << endl;

  char letter;
  cout << "Enter a letter" << endl;
  cin >> letter;
  switch (letter) {
  case 'a':
    cout << "Letter is a" << endl;
    break;
  case 'b':
    cout << "Letter is b" << endl;
    break;
  }
  return 0;
}
