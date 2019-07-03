#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E5+10;
const int INF=1E9+7;
int a[MaxN];
vector <int> ind;

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int mn=*min_element(a,a+n);
	for (int i=0;i<n;++i)
		if (mn==a[i])
			ind.push_back(i);
	int t=n-ind[ind.size()-1]+ind[0]-1;
	for (int i=1;i<ind.size();++i)
		t=max(t,ind[i]-ind[i-1]-1);
	cout << n*mn+t;
}