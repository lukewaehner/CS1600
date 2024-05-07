#include <iostream>
#include <unordered_map>
using namespace std;

void computeCoins(int &num) {
  unordered_map<string, int> coins = {
      {"Pennis", 1}, {"Dimes", 10}, {"Quarters", 25}};

  for (const pair<const string, int> &c : coins) {
    cout << c.first << ": " << int(num / c.second) << endl;
    num = num % c.second;
  }
}
int main() {
  int num;
  cout << "What amount of coins you would like to compute: ";
  cin >> num;
  computeCoins(num);
}
