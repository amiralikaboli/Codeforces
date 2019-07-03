#include <bits/stdc++.h>

using namespace std;

string s;

bool check(int l,int r){
	int dx=0,dy=0;
	for (int i=l;i<=r;++i)
		if (s[i]=='U')
			++dy;
		else if (s[i]=='D')
			--dy;
		else if (s[i]=='L')
			--dx;
		else
			++dx;
	if (dx==0 && dy==0)
		return true;
	return false;
}

int main(){
	int len;
	cin >> len;
	cin >> s;
	int ans=0;
	for (int i=0;i<len;++i)
		for (int j=i+1;j<len;++j)
			ans+=check(i,j);
	cout << ans;
}