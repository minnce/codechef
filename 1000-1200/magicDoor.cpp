#include <iostream>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
	    cin >> s;
	    bool flip = false;
	    int counter = 0;
	    for (int i = 0; i < s.length(); i++) {
	        if ((flip == false) && (s[i]=='0')) {
	            flip = true;
	            counter++;
	        }
	        else if ((flip == true) && (s[i]=='1')) {
	            flip = false;
	            counter++;
	        }
	    }
	    cout << counter << endl;
	}
	return 0;
}
