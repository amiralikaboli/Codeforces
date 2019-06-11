#include <bits/stdc++.h>

using namespace std;

const int MaxNM=500+10;
char c[MaxNM][MaxNM];
vector <int> adj[MaxNM*MaxNM];
queue <int> q;
int dist[MaxNM*MaxNM];
bool mark[MaxNM*MaxNM];
pair <int,int> p[MaxNM*MaxNM];

bool cmp(pair <int,int> a,pair <int,int> b){
	if (a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}

void bfs(int root){
	mark[root]=true;
	dist[root]=0;
	q.push(root);
	while (!q.empty()){
		root=q.front();
		q.pop();
		for (int i=0;i<adj[root].size();++i)
			if (mark[adj[root][i]]==false){
				q.push(adj[root][i]);
				mark[adj[root][i]]=true;
				dist[adj[root][i]]=dist[root]+1;
			}
	}
}

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> c[i][j];
	int x,y;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			if (c[i][j]=='.'){
				if (i!=0 && c[i-1][j]=='.')
					adj[i*m+j].push_back((i-1)*m+j);
				if (i!=n-1 && c[i+1][j]=='.')
					adj[i*m+j].push_back((i+1)*m+j);
				if (j!=0 && c[i][j-1]=='.')
					adj[i*m+j].push_back(i*m+j-1);
				if (j!=m-1 && c[i][j+1]=='.')
					adj[i*m+j].push_back(i*m+j+1);
				x=i;
				y=j;
			}
	bfs(x*m+y);
	for (int i=0;i<m*n;++i){
		p[i].first=dist[i];
		p[i].second=i;
	}
	sort(p,p+m*n,cmp);
	for (int i=0;i<k;++i){
		int ind=p[i].second;
		c[ind/m][ind%m]='X';
	}
	cerr << endl;
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j)
			cout << c[i][j];
		cout << endl;
	}
}