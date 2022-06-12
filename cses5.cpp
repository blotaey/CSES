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

	if(n==1){
		cout << 1;
		return 0;
	}
	if(n==2||n==3){
		cout << "NO SOLUTION";
		return 0;
	}
//2 4 1 3
//4 2 5 3 1
	if(n%2==0){
		for(int i=2; i <= n; i+=2)
			cout << i << " ";
		for(int i=1; i<n; i+=2){
			cout << i << " ";
		}
	}
	else{
		for(int i = n-1; i > 0; i-=2)
			cout << i << " ";
		for(int i = n; i > 0; i-=2)
			cout << i << " ";
	}

	return 0;
}