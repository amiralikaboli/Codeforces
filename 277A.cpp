#include <bits/stdc++.h>

using namespace std;

const int MaxLan=100+10;
const int MaxN=100+10;
int n,k;
bool mark[MaxLan];
bool adj[MaxN][MaxLan];

void dfs(int p){
	mark[p]=true;
	for (int i=0;i<n;++i)
		for (int j=1;j<=k;++j)
			if (adj[p][j]==true && adj[i][j]==true && mark[i]==false)
				dfs(i);
}

int main(){
	int sum=0;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		int t;
		cin >> t;
		sum+=t;
		for (int j=0;j<t;++j){
			int lang;
			cin >> lang;
			adj[i][lang]=true;
		}
	}
	if (sum==0){
		cout << n;
		return 0;
	}
	int ans=0;
	for (int i=0;i<n;++i)
		if (!mark[i]){
			dfs(i);
			++ans;
		}
	cout << --ans;
}