// Luke Waehner
// Midterm 1
#include <iostream>

using namespace std;

int main() {
  // array for the stores
  int stores[5];

  // inputs for stores
  for (int i = 0; i < sizeof(stores) / sizeof(stores[0]); i++) {
    cout << "Enter the store salees for store #" << i + 1 << " : ";
    cin >> stores[i];
  }

  // print stars
  for (int i = 0; i < sizeof(stores) / sizeof(stores[0]); i++) {
    cout << "Store " << i + 1 << " : ";
    for (int j = 0; j < (stores[i] / 100); j++) {
      cout << "* ";
    }
    cout << endl;
  }

  // get max, min, total
  int max = 0;
  int index_max, index_min;
  int min = stores[0];
  int total;
  for (int w = 0; w < sizeof(stores) / sizeof(stores[0]); w++) {
    if (stores[w] > max) {
      max = stores[w];
      index_max = w + 1;
    }
    if (stores[w] < min) {
      min = stores[w];
      index_min = w + 1;
    }
    total += stores[w];
  }

  cout << "Store #" << index_max << " had the highest sales of : " << max
       << endl;
  cout << "Store #" << index_min << " had the loweest ales of : " << min
       << endl;
  cout << "The total for all " << size(stores) << " stores was : " << total
       << endl;
  cout << "The average of all the stores is : " << total / size(stores) << endl;
  cout << "The range of sales is : " << max - min << endl;
  // type cast for the division to work
  cout << "The highest sales as a percent of total : "
       << (double(max) / total) * 100 << "%" << endl;
  cout << "The lowest sales as a percent of total : "
       << (double(min) / total) * 100 << "%" << endl;

  // normal bubble sort to get median
  for (int i = 0; i < 5 - 1; i++) {
    for (int j = 0; j < 5 - i - 1; j++) {
      if (stores[j] > stores[j + 1]) {
        int temp = stores[j];
        stores[j] = stores[j + 1];
        stores[j + 1] = temp;
      }
    }
  }
  // return the 3rd item [index 2]
  cout << "The median store sales number is : " << stores[2] << endl;
  return 0;
}
