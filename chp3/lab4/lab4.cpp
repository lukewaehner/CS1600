// Luke Waehner
// 2/15/24
// Lab 4

#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

  unordered_map<string, int> orders;

  string name;
  int val;
  int quantity;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "Hello, Welcome to the Bronx Bookstore!" << endl;
  cout << "What is your name: ";
  cin >> name;

  // mapping orders
  string books[] = {"Cervantes", "Homer", "Shakespeare"};
  for (int i = 0; i < (sizeof(books) / sizeof(books[0])); i++) {
    cout << "Enter the quantity of " << books[i]
         << " you would like to purchase: ";
    cin >> quantity;

    orders[books[i]] = quantity;
  }

  // mapping prices to names
  float total;
  unordered_map<string, float> prices;
  prices["Cervantes"] = 41.25;
  prices["Homer"] = 15.85;
  prices["Shakespeare"] = 30.50;

  for (auto &order : orders) {
    if (prices.find(order.first) != prices.end()) {
      total += order.second * prices[order.first];
    }
  }
  // tax
  total = total * 1.1;
  cout << "Total: " << total << endl;
  float userPay;

  cout << "How much money will you pay? ";
  cin >> userPay;

  // make sure accurate payment
  if (total > userPay) {
    cout << "You need to pay more money" << endl;
    return 0;
  }

  cout << endl;

  cout << "-------" << endl;
  cout << "Customer: " << name << endl;
  cout << "-------" << endl;

  cout << left << setw(15) << "Item" << setw(8) << "Number" << setw(6)
       << "Price" << endl; // Set column widths

  for (auto &order : orders) {
    if (prices.find(order.first) != prices.end()) {
      cout << left << setw(15) << order.first << setw(8) << order.second << "$ "
           << left << setw(5) << prices[order.first] * order.second
           << endl; // Align and set width
    }
  }

  // solely formatting
  cout << "------" << endl;
  cout << left << setw(23) << "Tax:"
       << "$ " << left << setw(6) << (total / 1.1) * 0.1 << endl;
  cout << "------" << endl;
  cout << left << setw(23) << "Total:"
       << "$ " << left << setw(6) << total << endl;
  cout << left << setw(23) << "User pay:"
       << "$ " << left << setw(6) << userPay << endl;
  cout << left << setw(23) << "Change:"
       << "$ " << left << setw(6) << userPay - total << endl;
  cout << "------" << endl;

  return 0;
}
