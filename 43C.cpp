#include <bits/stdc++.h>

using namespace std;

int cnt[5];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++cnt[x%3];
	}
	int ans=cnt[0]/2+min(cnt[1],cnt[2]);
	cout << ans;
}