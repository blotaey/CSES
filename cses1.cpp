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

	cout << n << " ";
	while(n!= 1){
		if(n%2==0) n /= 2;
		else n = (n * 3) + 1;

		cout << n << " ";
	}

	return 0;
}