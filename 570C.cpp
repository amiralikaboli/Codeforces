#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,l;
	cin >> l >> n;
	string s;
	cin >> s;
	int ans=0;
	for (int i=1;i<s.size();++i)
		if (s[i-1]=='.' && s[i]=='.')
			++ans;
	cerr << ans << endl;
	for (int i=0;i<n;++i){
		int	 ind;
		char c;
		cin >> ind >> c;
		--ind;
		if (c!='.' && s[ind-1]=='.' && s[ind]=='.' && ind!=0)
			--ans;
		if (c!='.' && s[ind+1]=='.' && s[ind]=='.' && ind!=s.size()-1)
			--ans;
		if (c=='.' && s[ind-1]=='.' && s[ind]!='.' && ind!=0)
			++ans;
		if (c=='.' && s[ind+1]=='.' && s[ind]!='.' && ind!=s.size()-1)
			++ans;
		s[ind]=c;
		cout << ans << "\n";
	}
}