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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int soln[n];
    soln[0] = 1;
    for (int i = 0; i < n; i++) {
        bool neg = false;
        int cont = 1;
        if (arr[i]<0) {
            neg = true;
        }
        for (int j = i+1; j < n+1; j++) {
            if (soln[i-1]>=2&&i>=1) {
                soln[i]=soln[i-1]-1;
                break;
            }
            else if (j==n) {
                soln[i]=cont;
                break;
            }
            else if (neg==true&&arr[j]>0) {
                neg=false;
                cont++;
            }
            else if (neg==false&&arr[j]<0) {
                neg=true;
                cont++;
            }
            else {
                soln[i]=cont;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << soln[i] << " ";
    }
    cout << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
