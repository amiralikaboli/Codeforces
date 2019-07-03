#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
string s[MaxN];
int t[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> s[i];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (s[i]==s[j])
				++t[i];
	int mx=0;
	for (int i=0;i<n;++i)
		mx=max(mx,t[i]);
	cout << mx;
}