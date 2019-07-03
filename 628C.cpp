#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,l;
	string s;
	cin >> l >> k;
	cin >> s;
	for (int i=0;i<l;++i){
		if (s[i]-'a'>'z'-s[i]){
			int mn=min(k,s[i]-'a');
			s[i]-=mn;
			k-=mn;
		}
		else{
			int mn=min(k,'z'-s[i]);
			s[i]+=mn;
			k-=mn;
		}
	}
	if (k)
		cout << -1;
	else
		cout << s;
}