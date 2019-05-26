#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E3+10;
bool b[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		--x;
		b[x]=true;
	}
	int ans=0;
	for (int i=0;i<n;++i)
		if (b[i]==false)
			++ans;
	cout << ans;
}