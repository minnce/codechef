#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    string s;
	    cin >> s;
	    int letters[26]={0};
	    for (int i = 0; i < n; i++) {
	        letters[(int)s[i]-97]++;
	    }
	    bool found = false;
	    for (int i = 0; i < 26; i ++) {
	        if (letters[i]%2 != 0) {
	            if (letters != 0) {
	                cout << "NO\n";
	                found = true;
	                break;
	            }
	        }
	    }
	    if (found == false) {
	        cout << "YES\n";
	    }
	}
	return 0;
}
