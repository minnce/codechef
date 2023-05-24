#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (b+c*2 <= a) {
            cout << "YES\n";
        }
        else {
            cout <<"NO\n";
        }
    }
	return 0;
}
