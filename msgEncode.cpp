#include <iostream>
using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	while (t--) {
	    cin >> n >> s;
	    for (int i = 0; i < n-1; i+=2) {
	        char dummy = s[i+1];
	        s[i+1] = s[i];
	        s[i] = dummy;
	    }
	    for (int i = 0; i < n; i++) {
	        s[i]+=(2*(108-s[i])+3);
	    }
	    cout << s << endl;
	}
	return 0;
}
