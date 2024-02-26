#include <iostream>

using namespace std;

int main(){

float wage;
int numHours;

cout << "Enter hours worked" << endl;
cin >> numHours;
cout << "What is your wage?" << endl;
cin >> wage;

float money = numHours * wage;

cout << "$" << money << endl;

return 0;
}
