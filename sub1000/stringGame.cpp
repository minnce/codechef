#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main() {
	int t,n;
	string s;
	cin >> t;
	while (t--) {
	    cin >> n >> s;
	    int ones = count(s.begin(),s.end(),'1');
	    int zeros = count(s.begin(),s.end(),'0');
	    if (ones == 0 || zeros == 0) {
	        cout << "ramos\n";
	    }
	    else if (min(ones,zeros)%2==1) {
	        cout << "zlatan\n";
	    }
	    else {
	        cout << "ramos\n";
	    }
	}
	return 0;
}
