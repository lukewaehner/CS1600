#include <iostream>
using namespace std;


int recursion(int* c, int total){
  if(c == 1){
    total = total + 1;
    return total;
  }
  total = total + c*;
  c* = c - 1;
  
  recursion(c*, total);
}

int main(){
  
  int& c;
  cout << "Enter a number to accumulate the sum : ";
  cin >> c*;

  cout << "The total is: " recursion(c) << endl;
  return 0;
}
