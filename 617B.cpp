#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=100+10;
int a[MaxN];
vector <int> ind;

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		if (a[i]==1)
			ind.push_back(i);
	}
	if (ind.size()==0){
		cout << 0;
		return 0;
	}
	if (ind.size()==1){
		cout << 1;
		return 0;
	}
	int ans=1;
	for (int i=1;i<ind.size();++i)
		ans*=(ind[i]-ind[i-1]);
	cout << ans;
}