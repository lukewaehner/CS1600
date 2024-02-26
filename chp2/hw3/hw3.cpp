//Luke Waehner
//HW3
//Salary Work
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int hours, dependents;
  float wage = 16.78;
  float overtime = wage*1.5; 
  double total, socialSecurity, federalIncome, stateIncome, unionDues, insurance;

  //inputs 
  cout << "How many hours did you work this week: ";
  cin >> hours;
  cout << "How many dependents do you have: ";
  cin >> dependents;

  // setup data
  socialSecurity = 0.06;
  federalIncome = 0.14;
  stateIncome = 0.05;
  unionDues = 10;

  //dependents
  if(dependents > 2){
    insurance = 35;
  } else { 
    insurance = 0;}
  
  //need overtime?
  if (hours <= 40){
  total = hours*wage;
  } else {
    total = 40*wage + (hours-40)*overtime;
  }
  // outputs
  cout << "\n\nGross pay: " << total << endl;
  cout << "\n" << endl;
  cout << "SS tax: -" << total*socialSecurity << endl; 
  cout << "Fed tax: -" << total*federalIncome << endl; 
  cout << "State Income tax: -" << total*stateIncome << endl;
  cout << "Unions dues: -" << unionDues << endl;
  cout << "Insurance: -" << insurance << endl;
  
  cout << "\nTake home pay: " << total - (total*socialSecurity + total*federalIncome + total*stateIncome + unionDues + insurance) << endl;
  
  return 0;
}
