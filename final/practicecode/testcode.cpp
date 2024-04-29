#include <iostream>

using namespace std;
void getNumbers(int &A, int &B) {
  int temp = A;
  A = B;
  B = temp;
}

int main() {
  int A = 1;
  int B = 2;
  cout << "A: " << A << " B: " << B << endl;
  getNumbers(A, B);
  cout << "A: " << A << " B: " << B << endl;
}
