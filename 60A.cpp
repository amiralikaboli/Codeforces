#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int l=1,r=n;
	for (int i=0;i<m;++i){
		string s;
		cin >> s >> s >> s;
		if (s=="left"){
			int x;
			cin >> s >> x;
			r=min(r,x-1);
		}
		else{
			int x;
			cin >> s >> x;
			l=max(l,x+1);
		}
	}
	int ans=r-l+1;
	cout << (ans<=0 ? -1 : ans);
}