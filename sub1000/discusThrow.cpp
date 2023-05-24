#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        a = max(a,b);
        a = max(a,c);
        cout << a << "\n";
    }
	return 0;
}
