#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
bool mark[MaxN];

int main(){
	int n;
	cin >> n;
	int t=0;
	mark[t]=true;
	for (int i=1;i<n;++i){
		t+=i;
		t%=n;
		mark[t]=true;
	}
	int ans=0;
	for (int i=0;i<n;++i)
		ans+=mark[i];
	if (ans==n)
		cout << "YES";
	else
		cout << "NO";
}