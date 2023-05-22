#include <iostream>
using namespace std;

int main() {
	long long t;
	string s;
	cin >> t;
	while (t--) {
	    cin >> s;
	    int n = s.length();
	    int letters[30];
	    for (int i = 0; i < 30; i++) {
	        letters[i] = 0;
	    }
	    for (int i = 0; i < n; i++) {
	        letters[(int)s[i]-96]++;
	    }
	    bool found = false;
	    for (int i = 0; i < 30; i++) {
	        if (letters[i]%2!=0) {
	            cout << "abcdefghijklmnopqrstuvwxyz"[i-1] << endl;
	            found = true;
	            break;
	        }
	    }
	    if (found == false) {
	        cout << -1 << endl;
	    }
	}
	return 0;
}
