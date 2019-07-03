#include <bits/stdc++.h>

using namespace std;

int m[20]={31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
	int n;
	string s;
	cin >> n >> s >> s;
	if (s=="week"){
		cout << 52+(n==5 || n==6);
		return 0;
	}
	int ans=0;
	for (int i=0;i<12;++i)
		if (m[i]>=n)
			++ans;
	cout << ans;
}