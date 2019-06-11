#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int t[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<k;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		++t[u];
		++t[v];
	}
	int ind;
	for (int i=0;i<n;++i)
		if (t[i]==0){
			ind=i;
			break;
		}
	cout << n-1 << endl;
	for (int i=0;i<n;++i)
		if (i!=ind)
			cout << ind+1 << " " << i+1 << endl;
}