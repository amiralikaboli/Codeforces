#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans=0,l=-1,r=-1;
	for (int i=0;i<s.size();++i){
		if(s[i]=='L'){
			if(r!=-1)
				ans+=(i-r+1)%2;
			r=-1;
			l=i;
		}
		if(s[i]=='R'){
			if (l==-1)
				ans+=i;
			else
				ans+=i-l-1;
			l=-1;
			r=i;
		}
	}
	if(r==-1 && l==-1)
		ans+=n;
	else if (r==-1)
		ans+=n-l-1;
	cout << ans;
}
