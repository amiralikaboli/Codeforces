#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int t[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> t[i];
	int l=0,r=n-1;
	int alice=0,bob=0;
	int ans1=0,ans2=0;
	while (l<=r){
		if (alice<=bob){
			alice+=t[l];
			++l;
			++ans1;
		}
		else{
			bob+=t[r];
			--r;
			++ans2;
		}
	}
	cout << ans1 << " " << ans2;
}