#include <cctype>
#include <iostream>
#include <string>

using namespace std;

class Password {
public:
  string str;

  explicit Password(string s = "") : str(std::move(s)) {}

  bool isValid() const {
    if (str.length() < 10)
      return false;
    bool hasNumber = false, hasUpperCase = false, hasSpecialCharacter = false;

    for (char ch : str) {
      if (isdigit(ch))
        hasNumber = true;
      else if (isupper(ch))
        hasUpperCase = true;
      else if (ispunct(ch))
        hasSpecialCharacter = true;

      if (hasNumber && hasUpperCase && hasSpecialCharacter)
        return true;
    }

    return false;
  }

  string getValidationMessage() const {
    if (isValid()) {
      return "This is a valid password";
    }

    string message = "This is not a valid password! ";
    if (str.length() < 10)
      message += "Your password is too short! ";
    bool hasNumber = false, hasUpperCase = false, hasSpecialCharacter = false;

    for (char ch : str) {
      if (isdigit(ch))
        hasNumber = true;
      if (isupper(ch))
        hasUpperCase = true;
      if (ispunct(ch))
        hasSpecialCharacter = true;
    }

    if (!hasUpperCase)
      message += "You need to add an uppercase letter. ";
    if (!hasNumber)
      message += "You need a number in your password. ";
    if (!hasSpecialCharacter)
      message += "A special character must be present in your password. ";

    return message;
  }
};

int main() {
  Password test;
  string input;
  bool running = true;
  char check;

  while (running) {
    cout << "Enter a password: ";
    cin >> input;
    test = Password(input);
    cout << test.getValidationMessage() << endl;

    cout << "Would you like to check another password? (y/n): ";
    cin >> check;
    running = (tolower(check) == 'y');
  }
  return 0;
}
