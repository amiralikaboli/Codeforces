#include <bits/stdc++.h>

using namespace std;

bool mark[30];

int main() {
	string s;
	cin >> s;
	int ans=1;
	int cnt=10;
	int tav=0;
	if (s[0]=='?')
		ans=9;
	if (s[0]>='A' && s[0]<='Z'){
		ans=9;
		cnt=9;
		mark[s[0]-'A']=true;
	}
	for(int i=1;i<s.size();++i){
		if(s[i]=='?')
			++tav;
		else if (s[i]>='A' && s[i]<='Z' && mark[s[i]-'A']==false){
			ans*=cnt;
			--cnt;
			mark[s[i]-'A']=true;
		}
	}
	cout << ans;
	for (int i=0;i<tav;++i)
		cout << '0';
}