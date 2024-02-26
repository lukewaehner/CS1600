// Luke Waehner
// 2/26/24
// Lab 5: Fordham Airlines. I said I would not make it this complex, but I lied.
#include <iostream>

using namespace std;

class ticket {

public:
  float price;

  float calcPrice(char destination, int time, char week) {
    // first calculate miami's pricing, then change it price if its colorado or
    // miami since the prices are based on miami pricing
    if (week == 'w') {
      if (500 <= time && time <= 1900) {
        price = 150;
      } else {
        price = 100;
      }
    } else {
      if (500 <= time && time <= 1900) {
        price = 180;
      } else {
        price = 120;
      }
    }
    if (destination == 'c') {
      price = price * 0.5;
    } else if (destination == 'p') {
      price = price * 2;
    }
    return price;
  }

  // calculate the total price, and record payment
  void priceForFlight(int q) {
    const float totalPrice = price * q;
    cout << "The amount due is: $" << totalPrice << endl;
    cout << "How much will you pay?: ";
    float userPay;
    cin >> userPay;
    if (totalPrice > userPay) {
      cout << "You cannot go on this trip, you did not pay enough."
              "Have a good day"
           << endl;
      exit(0);
    } else if (userPay > totalPrice) {
      cout << "Your change is: $" << userPay - totalPrice
           << " thank you for paying, your order has been confirmed" << endl;
    } else {
      cout << "Thank you for paying, your ordered has been confirmed and "
              "you have no change"
           << endl;
    }
  }

  // constructor
  ticket(char destination, int time, char week) {
    calcPrice(destination, time, week);
  }
};

// everything for the main function, I thought it was a repeated lab, but since
// its not this could just be the main function instead.
void userPrompt() {
  cout << "Welcome to Fordham Airlines!" << endl;

  cout << "What is your destination? ([C]hicago, [M]iami, [P]ortland)";
  char destination;
  cin >> destination;
  destination = tolower(destination);

  cout << "What time would you wish to leave at, using 24 hour time: ";
  int time;
  cin >> time;

  cout << "Are you leaving during the [W]eek, or during the week[E]nd: ";
  char weekClassification;
  cin >> weekClassification;
  weekClassification = tolower(weekClassification);

  ticket Flight = ticket(destination, time, weekClassification);
  cout << "Each ticket will cost : $" << Flight.price << endl;

  cout << "How many tickets do you need?: ";
  int quantity;
  cin >> quantity;

  Flight.priceForFlight(quantity);
}

int main() {
  userPrompt();
  return 0;
}
