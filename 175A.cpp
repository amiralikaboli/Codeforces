#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1000*1000;

int32_t main(){
	string s;
	cin >> s;
	int ans=-1;
	for (int i=0;i<s.size();++i)
		for (int j=i+1;j<s.size()-1;++j){
			int a=0,b=0,c=0;
			for (int l=0;l<=i;++l){
				a*=10;
				a+=s[l]-'0';
				a=min(a,MaxN+10);
			}
			for (int l=i+1;l<=j;++l){
				b*=10;
				b+=s[l]-'0';
				b=min(b,MaxN+10);
			}
			for (int l=j+1;l<s.size();++l){
				c*=10;
				c+=s[l]-'0';
				c=min(c,MaxN+10);
			}
			if (i!=0 && s[0]=='0')
				continue;
			if (j!=i+1 && s[i+1]=='0')
				continue;
			if (j!=s.size()-2 && s[j+1]=='0')
				continue;
			if (a<=MaxN && b<=MaxN && c<=MaxN)
				ans=max(ans,a+b+c);
		}
	cout << ans;
}