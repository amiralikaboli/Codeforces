#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,s;
	cin >> n >> s;
	int mx=-1;
	for (int i=0;i<n;++i){
		int x,y;
		cin >> x >> y;
		if (y==0 && x<=s)
			mx=max(mx,0);
		else if (y!=0 && x<s)
			mx=max(100-y,mx);
	}
	cout << mx;
}