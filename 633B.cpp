#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E7+10;
int t[MaxN];

int32_t main(){
	int n;
	cin >> n;
	for (int i=1;i<MaxN;++i){
		t[i]=t[i-1];
		int x=i;
		while (x%5==0){
			++t[i];
			x/=5;
		}
	}
	int l=lower_bound(t,t+MaxN,n)-t;
	int r=upper_bound(t,t+MaxN,n)-t;
	cout << (r-l) << endl;
	for (int i=l;i<r;++i)
		cout << i << " ";
}