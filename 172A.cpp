#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E4+10;
string s[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> s[i];
	int l=s[0].size();
	string prefix=s[0];
	for (int t=1;t<n;++t){
		int ind=0;
		for (int i=0;i<l;++i){
			if (s[t][i]!=prefix[i])
				break;
			++ind;
		}
		prefix=s[t].substr(0,ind);
		l=ind;
	}
	cout << l;
}