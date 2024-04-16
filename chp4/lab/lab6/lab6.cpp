// translates a phone number like 1-800-GOT JUNK

#include <iostream>
#include <string>

using namespace std;

int convertPhoneNumber(char a);

int main() {
  bool running = true;
  char userResponse;
  do {
    string phoneNumber;
    cout << "Enter a phone number: ";
    cin >> phoneNumber;
    for (int i = 0; i < phoneNumber.length(); i++) {
      if (tolower(phoneNumber[i]) >= 'a' && tolower(phoneNumber[i]) <= 'z') {
        phoneNumber[i] = convertPhoneNumber(tolower(phoneNumber[i]));
      } else {
        continue;
      }
    }
    cout << "The converted phone number: " << phoneNumber << endl;
    cout << "\nWould you like to convert a nother phone number? y/n: ";
    cin >> userResponse;
    userResponse = tolower(userResponse);
    if (userResponse != 'y') {
      running = false;
    }
  } while (running);
  cout << "Have a nice day!" << endl;
  return 0;
}

int convertPhoneNumber(char a) {
  a = tolower(a);
  switch (a) {
  case ('a'):
  case ('b'):
  case ('c'):
    return '2';
    break;
  case ('d'):
  case ('e'):
  case ('f'):
    return '3';
    break;
  case ('g'):
  case ('h'):
  case ('i'):
    return '4';
    break;
  case ('j'):
  case ('k'):
  case ('l'):
    return '5';
    break;
  case ('m'):
  case ('n'):
  case ('o'):
    return '6';
    break;
  case ('p'):
  case ('q'):
  case ('r'):
  case ('s'):
    return '7';
    break;
  case ('t'):
  case ('u'):
  case ('v'):
    return '8';
    break;
  case ('w'):
  case ('x'):
  case ('y'):
  case ('z'):
    return '9';
    break;
  default:
    return '?';
  }
}
