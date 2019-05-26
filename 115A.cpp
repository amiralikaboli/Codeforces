#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E3+10;
bool mark[MaxN];
int dist[MaxN];
vector <int> adj[MaxN];
vector <int> root;
queue <int> q;

void bfs(int r){
	dist[r]=0;
	q.push(r);
	while (!q.empty()){
		r=q.front();
		q.pop();
		for (int i=0;i<adj[r].size();++i){
			dist[adj[r][i]]=dist[r]+1;
			q.push(adj[r][i]);
		}
	}
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		if (a==-1)
			root.push_back(i);
		else
			adj[a-1].push_back(i);
	}
	for (int i=0;i<root.size();++i)
		bfs(root[i]);
	int ans=0;
	for (int i=0;i<n;++i)
		ans=max(ans,dist[i]);
	cout << ++ans;
}