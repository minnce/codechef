#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        cout << max(a,b)+max(c,d)<<endl;
    }
	return 0;
}
