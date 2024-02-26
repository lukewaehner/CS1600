// Luke Waehner
// 2/1/24
// Lab 2
// Calculating average acceleration through user input
#include <iostream>

using namespace std;

int main(){
	double vi, vf, t;
	cout << "Give the starting velocity" << endl;
	cin >> vi;
	cout << "Give the ending velocity" << endl;
	cin >> vf;
	cout << "How much time was the time span" << endl;
	cin >> t;

	double accl = (vf-vi)/t;
	cout << "The acceleration is: " << accl << endl;

return 0;
}
