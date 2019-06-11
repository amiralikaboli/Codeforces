#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxN=2E5+10;
const int MaxAi=1E6+10;
int t[MaxAi];
int a[MaxN],b[MaxN];
int ind[MaxN];
set <pii> st;

int main(){
	int n;
	cin >> n;
	int cnt=0;
	for (int i=0;i<n;++i){
		cin >> a[i] >> b[i];
		++t[a[i]];
		--t[b[i]];
		if (a[i]==0){
			ind[2]=b[i];
			continue;
		}
		st.insert(pii(a[i],b[i]));
	}
	for (int i=0;i<MaxAi;++i)
		if (t[i]>0){
			ind[1]=i;
			break;
		}
	for (int i=3;i<=n;++i){
		set<pii>::iterator it=st.lower_bound(pii(ind[i-2],0));
		ind[i]=it->second;
		st.erase(it);
	}
	for (int i=1;i<=n;++i)
		cout << ind[i] << " ";
}