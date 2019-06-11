#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

const int MaxN=1E5+10;
int a[MaxN],b[MaxN];
int org[MaxN],cheap[MaxN];

int32_t main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=1;i<=n;++i){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	for (int i=1;i<=n;++i){
		org[i]=org[i-1]+a[i];
		cheap[i]=cheap[i-1]+b[i];
	}
	int q;
	cin >> q;
	for (int i=0;i<q;++i){
		int type,l,r;
		cin >> type >> l >> r;
		if (type==1)
			cout << org[r]-org[--l] << endl;
		else
			cout << cheap[r]-cheap[--l] << endl;
	}
}