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

	int count = 0;
	int maxi = 0;

	string s;
	cin >> s;

	char last = s[0];

	for(int i = 1; i <= s.length(); i++){
		if(s[i] == last) count++;
		else{
			last = s[i];
			maxi = max(count, maxi);
			count = 0;
		}
	}

	cout << maxi + 1 << endl;
	return 0;
}