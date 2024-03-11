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

    // get inputs
    string getTime;
    cout << "What time did you start the call?: ";
    cin >> getTime;
    string tempTime = getTime;
    int lengthCall;
    cout << "How long was your call?: ";
    cin >> lengthCall;

    // turn time into an int
    getTime.erase(remove(getTime.begin(), getTime.end(), ':'), getTime.end());
    int time = stoi(getTime);

    float price;
    // if it is not a weekend day:
    if (!(day == "sa" || day == "su")) {
      if (800 <= time && time <= 1800) {
        // if its the daytime use this price model:
        price = lengthCall * 0.4;
      } else {
        // else, its the nighttime so we use this model
        price = lengthCall * 0.25;
      }
    } else {
      // use this price model for all weekend vals
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
  return 0;
}
