#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        if (a >= b) {
            b = b+c;
        }
        else {
            a = a+c;
        }
        if (a >= b) {
            b = b+d;
        }
        else {
            a = a+d;
        }
        if (a >= b) {
            cout << "N\n";
        }
        else {
            cout << "S\n";
        }
    }
	return 0;
}
