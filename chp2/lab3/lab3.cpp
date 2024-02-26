#include <iostream>
#include <cmath>

using namespace std;

double distance(double* x1, double* x2, double* y1, double* y2) {
  return sqrt(pow((*x2-*x1),2) + pow((*y2-*y1), 2)); 
}

double slope(double* x1, double* x2, double* y1, double* y2) {
  return (*y2-*y1)/(*x2-*x1);
}

int main(){
  double x1,y1,x2,y2;

  cout << "Enter the coordinates of x1" << endl;
  cin >> x1;

  cout << "Enter the coordinates of y1" << endl;
  cin >> y1;

  cout << "Enter the coordinates of x2" << endl;
  cin >> x2;

  cout << "Enter the coordinates of y2" << endl;
  cin >> y2;
  

  cout << "The slope for the line that connects the two points: " << slope(&x1,&x2,&y1,&y2) << endl;
  cout << "The distance between the two points: " << distance(&x1,&x2,&y1,&y2) << endl;
}

