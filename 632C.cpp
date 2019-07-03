#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E4+10;
string s[MaxN];

bool cmp(string a,string b){
	return a+b<b+a;
}

int main(){
	ios::sync_with_stdio(false); cin.tie();
	int n;
	cin >> n;
	int mx=0;
	for (int i=0;i<n;++i)
		cin >> s[i];
	sort(s,s+n,cmp);
	for (int i=0;i<n;++i)
		cout << s[i];
}