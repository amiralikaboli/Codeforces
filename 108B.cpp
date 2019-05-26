#include <bits/stdc++.h>

using namespace std;

set <int> st;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		st.insert(x);
	}
	set<int>::iterator it=st.begin();
	++it;
	for (it;it!=st.end();++it){
		set<int>::iterator it2=it;
		--it2;
		int x=*it;
		int y=*it2;
		if (2*y>x){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}