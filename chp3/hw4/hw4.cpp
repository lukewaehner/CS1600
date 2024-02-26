// Luke Waehner
// Feb 21
// HW 4: Grade Calcuations

#include <iostream>
using namespace std;

int main() {

  int exercises;
  cout << "How many exercises (N) have been preformed: ";
  cin >> exercises;

  double totalPoints, totalScore, temp;
  for (int i = 1; i <= exercises; i++) {
    cout << "What score did you receive for exercise " << i << ": ";
    cin >> temp;
    totalScore += temp;
    cout << "How many total points were possible for exercise " << i << ": ";
    cin >> temp;
    totalPoints += temp;
  }

  cout << "\nYour total is " << totalScore << " out of " << totalPoints
       << ", or " << totalScore / totalPoints * 100 << "%." << endl;

  return 0;
}
