#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E3+10;
int f[MaxN];

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> f[i];
		--f[i];
	}
	sort(f,f+n,cmp);
	int ans=0;
	for (int i=0;i<=n/k;++i)
		ans+=2*f[i*k];
	cout << ans;
}