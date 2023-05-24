#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++) {
	    cin >> n >> s;
	    int count = 0;
	    for(int j = 0; j < n; j++) {
	        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
	            count = 0;
	        }
	        else {
	            count++;
	        }
	        if (count == 4) {
	            break;
	        }
	    }
	    if (count == 4) {
	        cout << "NO\n";
	    }
	    else {
	        cout << "YES\n";
	    }
	}
	return 0;
}
