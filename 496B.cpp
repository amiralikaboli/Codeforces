#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans=s;
	for (int i=0;i<=9;++i){
		string t=s;
		for (int j=0;j<n;++j){
			int x=t[j]-'0';
			x+=i;
			x%=10;
			t[j]=x+'0';
		}
		for (int j=0;j<n;++j){
			string cck=t.substr(j,n-j)+t.substr(0,j);
			ans=min(ans,cck);
		}
	}
	cout << ans;
}