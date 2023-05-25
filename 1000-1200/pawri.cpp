#include <iostream>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
	    cin >> s;
	    for (int i = 0; i < s.length(); i++) {
	        if (i+4 <= s.length() && s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y') {
	            s[i+2]='w';
	            s[i+3]='r';
	            s[i+4]='i';
	        }
	    }
	    cout << s << endl;
	}
	return 0;
}
