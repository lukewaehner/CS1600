#include <iostream>

using namespace std;

int main() {

  // vars
  int nums[5];
  for (int i = 0; i < (sizeof(nums) / sizeof(nums[0])); i++) {
    cout << "Enter a number: ";
    cin >> nums[i];
  }
  int max = nums[0];
  int min = nums[0];
  for (auto &n : nums) {
    if (n > max) {
      max = n;
    }
    if (n < min) {
      min = n;
    }
  }
  cout << "The max number is: " << max << "\nThe min number is: " << min
       << endl;
  return 0;
}
