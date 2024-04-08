#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[5] = {2, 1, 0, 3, 4};
  for (auto &a : arr) {
    cout << a << endl;
  }

  cout << endl;

  int n = 5;
  sort(arr, arr + n);
  for (auto &a : arr) {
    cout << a << endl;
  }
  return 0;
}
