#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        a = max(a,b);
        c = max(c,d);
        if (a < c) {
            cout << "P\n"; 
        }
        else if (a > c) {
            cout << "Q\n";
        }
        else {
            cout <<"TIE\n";
        }
    }

	return 0;
}
