#include <bits/stdc++.h>

using namespace std;

const int MaxPQ=50+10;
pair <int,int> a[MaxPQ];
pair <int,int> b[MaxPQ];

int main(){
	int p,q,l,r;
	cin >> p >> q >> l >> r;
	for (int i=0;i<p;++i)
		cin >> a[i].first >> a[i].second;
	for (int i=0;i<q;++i)
		cin >> b[i].first >> b[i].second;
	int ans=0;
	for (int t=l;t<=r;++t){
		bool mark=false;
		for (int i=0;i<p;++i)
			for (int j=0;j<q;++j)
				if (!(b[j].second+t<a[i].first || a[i].second<b[j].first+t))
					mark=true;
		ans+=mark;
	}
	cout << ans;
}