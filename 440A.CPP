#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
bool mark[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n-1;++i){
		int x;
		cin >> x;
		mark[x]=true;
	}
	for (int i=1;i<=n;++i)
		if (mark[i]==false){
			cout << i;
			return 0;
		}
}