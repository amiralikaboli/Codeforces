#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n,s,t;
	cin >> n >> s >> t;
	--s;
	--t;
	for (int i=0;i<n;++i){
		cin >> a[i];
		--a[i];
	}
	if (s==t){
		cout << 0;
		return 0;
	}
	int cnt=a[s];
	int ans=1;
	while (cnt!=s){
		if (cnt==t){
			cout << ans;
			return 0;
		}
		cnt=a[cnt];
		++ans;
	}
	cout << -1;
}