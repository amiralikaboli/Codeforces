#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int t[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> t[i];
	sort(t,t+n);
	int s=0;
	int ans=n;
	for (int i=0;i<n;++i){
		if (s>t[i])
			--ans;
		else
			s+=t[i];
	}
	cout << ans;
}