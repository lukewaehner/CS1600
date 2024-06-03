#include <iomanip>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// generate the first survey
unordered_map<string, int> generateSurvey() {
  unordered_map<string, int> tempmap;
  cout << "Enter 6 current issues to rate, and rank them on a scale of 1-10 "
          "based on importance. 10 being most important, and 1 being least."
       << endl;
  for (int i = 0; i < 6; i++) {
    string tempstr;
    int tempint;
    cout << "Enter topic: ";
    cin >> tempstr;
    cout << "Rank that topic from 1-10: ";
    cin >> tempint;

    tempmap[tempstr] = tempint;
  }
  cout << endl;
  return tempmap;
}

// rerun the survey with the given topics from the first survey
unordered_map<string, int> runAgain(unordered_map<string, int> survey) {
  unordered_map<string, int> returnmap;
  int tempInt;
  cout << "Rank these issues on their importance to you, 10 being most "
          "important and 1 being least important"
       << endl;
  for (const pair<const string, const int> t : survey) {
    cout << "Please rank the value of " << t.first << ": ";
    cin >> tempInt;
    returnmap[t.first] = tempInt;
  }
  cout << endl;
  return returnmap;
}

void printResults(vector<unordered_map<string, int>> surveys) {
  unordered_map<string, int> totalmap;
  // turn the vector into an individualized total survey
  for (auto &s : surveys) {
    for (const pair<const string, const int> &i : s) {
      totalmap[i.first] += i.second;
    }
  }

  // push items into an array and apply a bubble sort
  int sortarr[6];
  int iter = 0;
  for (const pair<const string, const int> &i : totalmap) {
    sortarr[iter] = i.second;
    iter += 1;
  }

  for (int i = 0; i < 6 - 1; i++) {
    for (int j = 0; j < 6 - i - 1; j++) {
      if (sortarr[j] > sortarr[j + 1]) {
        int temp = sortarr[j];
        sortarr[j] = sortarr[j + 1];
        sortarr[j + 1] = temp;
      }
    }
  }

  // grab the total
  int total = 0;
  for (int i = 0; i < 6; i++) {
    total += sortarr[i];
  }
  // assign values to variables
  int lowestval = sortarr[0];
  int highestval = sortarr[5];

  // printing
  cout << "Results from " << surveys.size() << " surveys" << endl;
  cout << endl << endl;
  cout << setw(14) << "Topics" << setw(10) << "Total" << setw(10) << "Average"
       << setw(20) << "Most Important" << setw(20) << "Least Important" << endl;

  cout << setw(14) << "------" << setw(10) << "-----" << setw(10) << "-------"
       << setw(20) << "--------------" << setw(20) << "---------------" << endl;

  // attain key val from dictionaries
  string highestkey, lowestkey;

  // way more printing
  for (const pair<const string, const int> &i : totalmap) {
    if (i.second == highestval) {
      highestkey = i.first;
      cout << setw(14) << i.first << setw(10) << i.second << setw(10)
           << double(i.second) / surveys.size() << setw(20) << i.first << endl;
    } else if (i.second == lowestval) {
      lowestkey = i.first;
      cout << setw(14) << i.first << setw(10) << i.second << setw(10)
           << double(i.second) / surveys.size() << setw(40) << i.first << endl;
    } else {
      cout << setw(14) << i.first << setw(10) << i.second << setw(10)
           << double(i.second) / surveys.size() << endl;
    }
  }
  cout << endl;
  cout << "The total survey numbers were: " << total << endl;
  cout << "The highest survey was " << highestkey << ": as a percent of total: "
       << (double(totalmap[highestkey]) / total) * 100 << "%" << endl;
  cout << "The lowest survey was " << lowestkey << ": as a percent of total: "
       << (double(totalmap[lowestkey]) / total) * 100 << "%" << endl;

  cout << endl;
  cout << "Have a nice day!" << endl;
}

int main() {
  vector<unordered_map<string, int>> surveys;
  bool running = true;
  char usercond;
  surveys.push_back(generateSurvey());
  do {
    cout << "Would you like to take another survey? (y/n): ";
    cin >> usercond;
    if (tolower(usercond) == 'n') {
      break;
    }
    cout << endl;
    surveys.push_back(runAgain(surveys.back()));
  } while (running);
  printResults(surveys);
  return 0;
}
