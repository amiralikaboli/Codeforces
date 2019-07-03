#include <bits/stdc++.h>

using namespace std;

set <int> st;
vector <int> ans;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x=1;
		while (st.find(x)!=st.end()){
			st.erase(*st.begin());
			++x;
		}
		st.insert(x);
	}
	for (set<int>::iterator it=st.begin();it!=st.end();++it)
		ans.push_back(*it);
	for (int i=ans.size()-1;i>=0;--i)
		cout << ans[i] << " ";
}