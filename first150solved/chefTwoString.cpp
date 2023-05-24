#include <iostream>
using namespace std;

int main() {
	int t;
	string s1, s2;
	cin >> t;
	while (t--) {
	    cin >> s1 >> s2;
	    int mincount = 0;
	    int maxcount = 0;
	    for (int i = 0; i < s1.length(); i++) {
	        if (s1[i] == '?' && s2[i] == '?') {
	            maxcount++;
	        }
	        else if (s1[i] == '?' && s2[i] != '?') {
	            maxcount++;
	        }
	        else if (s1[i] != '?' && s2[i] == '?') {
	            maxcount++;
	        }
	        else if (s1[i] != s2[i]) {
	            mincount++;
	            maxcount++;
	        }
	    }
	    cout << mincount << " " << maxcount << endl;
	}
	return 0;
}
