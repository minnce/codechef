#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int n;
	cin >> s >> n;
	bool flag = false;
	for (int i = 0; i<n;i++) {
	    flag = false;
	    string dummy;
	    cin >> dummy;
	    for (int j = 0; j < dummy.length(); j++) {
	        if (s.find(dummy[j]) == -1) {
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
