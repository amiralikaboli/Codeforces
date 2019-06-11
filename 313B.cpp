#include <iostream>

using namespace std;

const int MaxN=1E5+10;
int r[MaxN],l[MaxN];
int dp[MaxN];

int main (){
	string s;
	int m;
	cin >> s >> m;
	for (int i=0;i<m;++i){
		cin >> l[i] >> r[i];
		--l[i];
		--r[i];
	}
	for (int i=1;i<s.size();++i){
		dp[i]=dp[i-1];
		if (s[i]==s[i-1])
			++dp[i];
	}
	for (int i=0;i<m;++i)
		cout << dp[r[i]]-dp[l[i]] << endl;
}