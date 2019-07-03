#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
int t[MaxN];
int dp[MaxN];

int main(){
	string s;
	cin >> s;
	int m;
	cin >> m;
	for (int i=0;i<m;++i){
		cin >> a[i];
		--a[i];
	}
	for (int i=0;i<m;++i)
		++t[a[i]];
	dp[0]=t[0];
	for (int i=1;i<s.size()/2;++i)
		dp[i]=dp[i-1]+t[i];
	for (int i=0;i<s.size()/2;++i)
		if (dp[i]%2)
			swap(s[i],s[s.size()-i-1]);
	cout << s;
}