#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
  bool runningLoop = true;
  while (runningLoop) {
    string day;
    cout << "What day of the week did you start the call: ";
    cin >> day;
    string tempDay = day;

    // turn day into lowercase to not have to doublecheck the cases
    transform(day.begin(), day.end(), day.begin(),
              [](unsigned char c) { return tolower(c); });

    cout << day << endl;

    string getTime;
    cout << "What time did you start the call?: ";
    cin >> getTime;
    string tempTime = getTime;
    int lengthCall;
    cout << "How long was your call?: ";
    cin >> lengthCall;

    // turn time into an int cus im lazy
    getTime.erase(remove(getTime.begin(), getTime.end(), ':'), getTime.end());
    cout << getTime << endl;
    int time = stoi(getTime);

    float price;
    if (!(day == "sa" || day == "su")) {
      if (800 <= time && time <= 1800) {
        price = lengthCall * 0.4;
      } else {
        price = lengthCall * 0.25;
      }
    } else {
      price = lengthCall * 0.15;
    }
    cout << "Your call cost: $" << price << ", it was on " << tempDay << " at "
         << tempTime << " for " << lengthCall << " minutes." << endl;
    char checkGoing;
    cout << "Would you like to continue calculating more phone calls? (y/n): ";
    cin >> checkGoing;
    checkGoing = tolower(checkGoing);
    if (checkGoing == 'n') {
      runningLoop = false;
    }
  }
}
