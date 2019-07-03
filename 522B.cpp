#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
const int MaxAi=1E3+10;
int w[MaxN],h[MaxN];
int cnt[MaxAi];
set <int> st;

int main(){
	int n;
	cin >> n;
	int sumw=0;
	for (int i=0;i<n;++i){
		cin >> w[i] >> h[i];
		++cnt[h[i]];
		sumw+=w[i];
		st.insert(h[i]);
	}
	for (int i=0;i<n;++i){
		if (cnt[h[i]]==1)
			st.erase(h[i]);
		cout << (sumw-w[i])*(*st.rbegin()) << " ";
		st.insert(h[i]);
	}
}