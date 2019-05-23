#include <bits/stdc++.h>

using namespace std;

bool adj[10][10];

int main(){
	int m;
	cin >> m;
	for (int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u][v]=true;
		adj[v][u]=true;
	}
	for (int i=0;i<5;++i)
		for (int j=i+1;j<5;++j)
			for (int l=j+1;l<5;++l){
				int cnt=adj[i][j]+adj[j][l]+adj[l][i];
				if (cnt==0 || cnt==3){
					cout << "WIN";
					return 0;
				}
			}
	cout << "FAIL";
}