#include <bits/stdc++.h>

using namespace std;

#define int long long

int len(int n){
	int x=n;
	int t=1;
	x/=10;
	while (x){
		x/=10;
		++t;
	}
	return t;
}

int32_t main(){
	string s;
	cin >> s;
	int n=(s[0]-'0')*10000+(s[2]-'0')*1000+(s[4]-'0')*100+(s[3]-'0')*10+(s[1]-'0');
	int x=1;
	for (int i=0;i<5;++i){
		x*=n;
		x%=100000;
	}
	cout << string(5-len(x),'0') << x;
}