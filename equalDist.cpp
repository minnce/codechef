#include <iostream>
using namespace std;

int main() {
	int t,a,b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if ((a+b)%2 != 0) {
            cout << "NO\n";
        }
        else {
            cout <<"YES\n";
        }
    }
	return 0;
}
