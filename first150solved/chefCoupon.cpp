#include <iostream>
using namespace std;

int main() {
	int t, d, c;
	cin >> t;
	while (t--) {
	    cin >> d >> c;
	    int day1 = 0;
	    for (int i = 0; i < 3; i++) {
	        int dummy = 0;
	        cin >> dummy;
	        day1+=dummy;
	    }
	    int day2 = 0;
	    for (int i = 0; i < 3; i++) {
	        int dummy = 0;
	        cin >> dummy;
	        day2+=dummy;
	    }
	    if ((day1 >= 150 && day2 >= 150) && (2*d > c)) {
	        cout << "YES\n";
	    }
	    else if ((day1 < 150 && day2 >= 150) && (d > c)) {
	        cout << "YES\n";
	    }
	    else if ((day2 < 150 && day1 >= 150) && (d > c)) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
