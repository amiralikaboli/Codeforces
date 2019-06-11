#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,a,b,v;
	cin >> k >> a >> b >> v;
	int ans=0;
	while (a>0){
		int mn=min(k,b+1);
		a-=mn*v;
		b-=(mn-1);
		++ans;
	}
	cout << ans;
}