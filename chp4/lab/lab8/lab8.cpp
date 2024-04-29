#include <iostream>

using namespace std;

void count(string test) {
  int counts[25] = {0};
  for (char c : test) {
    if (int(tolower(c)) >= 97 && int(tolower(c)) <= 122) {
      counts[int(tolower(c)) - 97] += 1;
    }
  }
  for (int i = 0; i <= sizeof(counts) / sizeof(counts[0]); i++) {
    if (counts[i] != 0) {
      cout << char(i + 97) << ": " << counts[i] << " times" << endl;
    } else {
      continue;
    }
  }
}
int main() {
  string test;
  cout << "Enter a string to test: ";
  cin >> test;
  count(test);
}
