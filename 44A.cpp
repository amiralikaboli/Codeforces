#include <bits/stdc++.h>

using namespace std;

#define pss pair<string,string>

set <pss> st;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		string tree,color;
		cin >> tree >> color;
		st.insert(pss(tree,color));
	}
	cout << st.size();
}