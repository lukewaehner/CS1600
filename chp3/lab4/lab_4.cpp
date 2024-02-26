// Luke Waehner
// Feb 24, 24'
// Lab 4: Bookstore & money.
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
  string author;
  float price;
  int orders;

  Book(string a, float p, int o) {
    author = a;
    price = p;
    orders = o;
  }
  float ReturnTotal() { return (this->price) * (this->orders); }
};

int main() {
  vector<Book> bookStore;
  string name;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "Hello, welcome to the Bronx Bookstore!" << endl;
  cout << "What is your name: ";
  cin >> name;
  cout << endl;

  for (int i = 0; i < 3; i++) {
    int temp;

    switch (i) {
    case 0:
      cout << "How many Cervantes books would you like?: ";
      break;

    case 1:
      cout << "How many Homer books would you like: ";
      break;

    case 2:
      cout << "How many Shakespeare books would you like: ";
      break;
    }

    cin >> temp;
    // the superior if statement
    string author = i == 0 ? "Cervantes" : i == 1 ? "Homer" : "Shakespeare";
    float price = i == 0 ? 41.25 : i == 1 ? 15.85 : 30.50;
    bookStore.push_back(Book(author, price, temp));
  }
  cout << endl;
  // referencing for better names
  Book &Cervantes = bookStore[0];
  Book &Homer = bookStore[1];
  Book &Shakespeare = bookStore[2];

  double total = 1.1 * (Cervantes.ReturnTotal() + Homer.ReturnTotal() +
                        Shakespeare.ReturnTotal());

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

  for (auto &order : bookStore) {
    cout << left << setw(15) << order.author << setw(8) << order.orders << "$ "
         << left << setw(5) << order.ReturnTotal()
         << endl; // same idea, 15, 8 ,6 so everything is lined in the output
  }

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
