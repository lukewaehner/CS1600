#include <iostream>

using namespace std;

int main() {
string lines[] = {
	"*********************************",
	"",
	"   C C C      S S S S      !!    ",
	"  C     C    S       S     !!    ",	
	" C          S              !!    ",
	"C            S             !!    ",
	"C             S S S S      !!    ",
	"C                    S     !!    ",
	"C                     S    !!    ",
	" C          S        S     !!    ",
	"  C     C    S      S            ",
	"   C C C      S S S S      00    ",
	"",
	"*********************************",
	
	};
for(int i = 0; i < sizeof(lines)/sizeof(lines[0]); i++) {
	cout << lines[i] << endl;
	};
return 0;
}
