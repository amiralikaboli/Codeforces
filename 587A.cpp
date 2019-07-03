#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E6+100;
int t[MaxN];

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		++t[a];
	}
	int ans=0;
	for (int i=0;i<MaxN;++i){
		ans+=t[i]%2;
		t[i+1]+=t[i]/2;
	}
	cout << ans;
}