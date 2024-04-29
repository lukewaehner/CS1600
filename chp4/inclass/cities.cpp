#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

unordered_map<string, string> states_capitals = {
    {"Florida", "Tallihasee"},
    {"New York", "Albany"},
    {"Massachusets", "Boston"},
    {"Texas", "Austin"},
};

int main() { cout << states_capitals["Florida"] << endl; }
