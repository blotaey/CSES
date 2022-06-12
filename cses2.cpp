#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("-output.txt", "w", stdout);
#endif

	int n, s = 0;
	cin >> n;
	for(int i = 1; i<n; ++i){
		int a;
		cin >> a;
		s += a;
	}

	cout << n*(n+1)/2 - s;

	return 0;
}