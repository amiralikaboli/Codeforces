#include <bits/stdc++.h>

using namespace std;

const int MaxK=100+10;
int t[MaxK];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x];
	}
	int ans=0;
	while (t[k]!=n){
		for (int i=k;i>=1;--i)
			if (t[i-1]){
				--t[i-1];
				++t[i];
			}
		++ans;
	}
	cout << ans;
}