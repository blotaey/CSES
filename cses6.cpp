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

	int t;
	cin >> t;

	while(t--){
		int r, c;
		cin >> r >> c;

		if(r == c){
			cout << r*r - (r - 1) << endl;
		}
		else{
			int val = max(r,c);

			val = val * val - (val - 1);

			if(c > r){
				if(c % 2 == 0){
					val -= (c - r);
				}
				else{
					val += (c - r);
				}
			}
			else if(r > c){
				if(r%2 == 0){
					val += (r - c);
				}
				else{
					val -= (r - c);
				}
			}

			cout << val << endl;
		}
	}


	return 0;
}