#include <iostream>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
	    cin >> s;
	    cout << ((s[s.length()-1]=='1')?"WIN\n":"LOSE\n");
	}
	return 0;
}
