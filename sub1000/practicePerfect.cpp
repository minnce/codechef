#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	int arr[4];
    int tot = 0;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        if (arr[i]>=10) {
            tot++;
        }
    }
    cout << tot << endl;
    	return 0;
}
