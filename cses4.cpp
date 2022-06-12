#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int mx = 0;
	int ans = 0;
	for(int i =0; i < n; i++){
		int x;
		cin >> x;
		mx = max(x, mx);
		ans += mx - x;
	}


	cout << ans << endl;

	return 0;
}