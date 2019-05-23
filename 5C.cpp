#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E6+10;
int dp[MaxN];
stack <int> stck;

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		if (s[i]=='(')
			stck.push(i);
		else{
			if (stck.size()==0)
				continue;
			dp[i]=i-stck.top()+1;
			if (stck.size()!=0)
				dp[i]+=dp[stck.top()-1];
			stck.pop();
		}
	int ans=*max_element(dp,dp+s.size());
	int t=0;
	for (int i=0;i<s.size();++i)
		t+=(dp[i]==ans);
	if (ans==0)
		cout << "0 1";
	else
		cout << ans << " " << t;
}