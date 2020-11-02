#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, a, b;
		cin >> n >> a >> b;
		int x[n];
		for(int i=0; i<n; ++i)
			cin >> x[i];
		double n1=0, n2=0;
		for(int i=0; i<n; ++i) {
			if(a==x[i])
				n1++;
			if(b==x[i])
				n2++;
		}
		cout << fixed << setprecision(10);
		cout << (n1/n)*(n2/n) << "\n";
	}
}
