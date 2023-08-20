#include <iostream>
using namespace std;

int main() {
	int t;
	string s1, s2;
	cin >> t;
	while (t--) {
	    cin >> s1 >> s2;
	    bool flag = false;
	    for (int i =0; i < s1.length(); i++) {
	        if (s1[i] != s2[i] && s1[i]!='?' && s2[i]!='?') {
	            cout << "No\n";
	            flag = true;
	            break;
	        }
	    }
	    if (flag == false) {
	        cout << "Yes\n";
	    }
	}
	return 0;
}
