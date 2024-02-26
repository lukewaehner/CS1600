#include <iostream>

using namespace std;

int main(){

double length, width, height;
cout << "What is the length of the tank" << endl;
cin >> length;
cout << "width?" << endl;
cin >> width;
cout << "height?" << endl;
cin >> height;

cout << "The fishbowl's volume is: " <<  length*width*height << endl;

return 0;
}

