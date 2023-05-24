#include <iostream>
using namespace std;

int main() {
	int t,a,b,m;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> m;
        cout << min(abs(b-a),abs(abs(a-b)-m)) << endl;
    }
	return 0;
}
