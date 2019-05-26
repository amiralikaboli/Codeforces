#include <bits/stdc++.h>

using namespace std;

int t[100+10];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x];
	}
	int cnt=0;
	for (int i=0;i<100+10;++i)
		if (t[i]%2){
			++cnt;
			--t[i];
		}
	if ((n-cnt)%4==2)
		cnt+=2;
	cout << (n-cnt)/4;
}