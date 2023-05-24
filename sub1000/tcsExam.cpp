#include <iostream>
using namespace std;

int main() {
	int t, dd,dt,ddm,sd,st,sdm;
	cin >> t;
	while (t--) {
	    cin >> dd >> dt >> ddm >> sd >> st >> sdm;
	    int dra = dd+dt+ddm;
	    int slo = sd+st+sdm;
	    if (dra > slo) {
	        cout << "DRAGON\n";
	    }
	    else if (slo > dra) {
	        cout << "SLOTH\n";
	    }
	    else if (slo == dra) {
	        if (dd > sd) {
	            cout << "DRAGON\n";
	        }
	        else if (sd > dd) {
	            cout << "SLOTH\n";
	        }
	        else if (dt > st) {
	            cout << "DRAGON\n";
	        }
	        else if (st > dt) {
	            cout << "SLOTH\n";
	        }
	        else {
	            cout << "TIE\n";
	        }
	    }
	}
	return 0;
}
