#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string s;
	    cin >> s;
	    int alpha[27] = {0};
	    for (int i = 0; i < s.length(); i++) {
	        alpha[(int)s[i]-'a']++;
	    }
	    int tot = 0;
	    for (int i = 0; i < 27; i++) {
	        if (alpha[i] >= 1) {
	            tot++;
	        }
	    }
	    cout << tot << endl;
	}
	return 0;
}
