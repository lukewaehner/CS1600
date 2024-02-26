// Luke Waehner
// 2/4/24
// HW2 -> Measuring for a meeting room. Tried to get back into pointers to reference variables within calculateMeeting() in a separate function.
// Also made it sort of recursive instead of slapping a while-loop over everything
// Added some error proofing with negative inputs and all that, I dont feel like correcting any type mismatches in input though
#include <iostream>
#include <cctype>
using namespace std;

void legalMeeting(int* people, int*capacity);

void calculateMeeting(){
	int people, capacity;
	bool validInputs = false;
	//check if inputs are correctly assigned
	while(!validInputs){
		cout << "How many people can attend" << endl;
		cin >> capacity;
		cout << "How many people are currently in attendence" << endl;
		cin >> people;

	if(capacity >= 0 &&  people >= 0) {
	validInputs = true; //break the loop
	} else {
		cout << "Cannot have a negative amount of people!" << endl;
		}
	}
	//main execution
	legalMeeting(&people, &capacity);

	//check if over w/ prompt

	char decision;

	cout << "Are you done calculating meetings? Y/N" << endl;
	cin >> decision;
	decision = tolower(decision);
	if (decision == 'n') {
		calculateMeeting(); }
}

void legalMeeting(int* people, int* capacity){
	if(*people <= *capacity){
		cout << "This is a legal meeting, and you can hold " << *capacity - *people << " more people." << endl;
	} else {
		cout << "Woah! I dont think you can have this many people in the room, please exclude " << *people - *capacity << " people to make this meeting comply with standards" << endl;
	}
}

int main() {
	calculateMeeting();
	return 0;
}
