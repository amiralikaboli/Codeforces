#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int ans=0;
	int cnt=1;
	for (int i=1;i<s.size();++i)
		if (s[i]==s[i-1])
			++cnt;
		else{
			ans+=(cnt+4)/5;
			cnt=1;
		}
	ans+=(cnt+4)/5;
	cout << ans;
}