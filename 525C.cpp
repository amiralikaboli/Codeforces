#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
const int MaxAi=1E6+10;
int a[MaxN];
vector <int> t;

int32_t main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for (int i=n-1;i>0;--i)
		if (a[i]-a[i-1]<=1){
			t.push_back(a[i-1]);
			--i;
		}
	if (t.size()<2){
		cout << 0;
		return 0;
	}
	int ans=0;
	for (int i=0;i<t.size()-1;i+=2)
		ans+=t[i]*t[i+1];
	cout << ans;
}