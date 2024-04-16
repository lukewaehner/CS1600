#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// Controls the digits in a vector because idk how to pass a array through a
// function???????
vector<int> getNums(int test) {
  vector<int> arr;
  for (int i = 3; i >= 0; i--) {
    arr.push_back((int(test / pow(10, i)) % 10));
  }
  return arr;
}

// simple two pointer approach
bool numsNotTheSame(int test) {
  vector<int> arr = getNums(test);

  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (arr[i] == arr[j]) {
        return false;
      } else {
        continue;
      }
    }
  }
  return true;
}

// sums to said value with default at 27
bool sumToVal(int test, int val = 27) {
  vector<int> arr = getNums(test);
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
  }

  if (sum == val) {
    return true;
  } else {
    return false;
  }
}

// inline function as this is easy to replace in the code and reduces memory
// overhang, sumToVal and getNums would cause code bloat
inline bool isOdd(int test) {
  if (test % 2 != 0) {
    return true;
  }
  return false;
}

// also easy to inline this one
inline bool compareDigits(int test) {
  if ((test / 1000) == (3 * (((test / 10) % 100) % 10))) {
    return true;
  }
  return false;
}

// driver function for returning value of the number, with a default return of
// -1 if the value cannot be satisfied
int riddlerNum() {
  for (int i = 1000; i < 10000; i++) {
    if (isOdd(i) && compareDigits(i) && sumToVal(i) && numsNotTheSame(i)) {
      return i;
    } else {
      continue;
    }
  }
  return -1;
}

int main() {
  // driver code
  cout << "Riddler's Number is: " << riddlerNum() << endl;
}
