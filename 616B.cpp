#include <bits/stdc++.h>

using namespace std;

const int MaxNM=100+10;
const int INF=1E9+7;
int c[MaxNM][MaxNM];

int main(){
	int n,m;
	cin >> n >> m;
	int ans=0;
	for (int i=0;i<n;++i){
		int mn=INF;
		for (int j=0;j<m;++j){
			cin >> c[i][j];
			mn=min(mn,c[i][j]);
		}
		ans=max(mn,ans);
	}
	cout << ans;
}