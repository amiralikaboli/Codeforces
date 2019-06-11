#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E5+10;
int ans[MaxN];
set <int> st;

int main(){
	ios::sync_with_stdio(false);
	int n,q;
	cin >> n >> q;
	for (int i=1;i<=n;++i)
		st.insert(i);
	for (int i=0;i<q;++i){
		int l,r,w;
		cin >> l >> r >> w;
		set<int>::iterator it_low=st.lower_bound(l);
		set<int>::iterator it_up=st.upper_bound(r);
		for (set<int>::iterator it=it_low;it!=it_up;++it)
			if (*it!=w)
				ans[*it]=w;
		st.erase(it_low,it_up);
		st.insert(w);
	}
	for (int i=1;i<=n;++i)
		cout << ans[i] << " ";
}