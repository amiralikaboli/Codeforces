#include <bits/stdc++.h>

using namespace std;

string alchol[]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};

int main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=0;i<n;++i){
		string s;
		cin >> s;
		if (s[0]>='0' && s[0]<='9'){
			int cnt=0;
			for (int i=0;i<s.size();++i){
				cnt*=10;
				cnt+=s[i]-'0';
			}
			ans+=(cnt<18);
		}
		else
			for (int i=0;i<11;++i)
				if (s==alchol[i])
					++ans;
	}
	cout << ans;
}