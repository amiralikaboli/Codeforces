#include <bits/stdc++.h>

using namespace std; 

const int MaxN=100+10;
const int MaxAlph=30+10;
bool imp;
int mark[MaxAlph];
int dist[MaxAlph];
string ans="";
string name[MaxN];
vector <int> adj[MaxAlph];

void dfs(int v){
	mark[v]=1;
	for (int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		if (mark[u]==1){
			cout << "Impossible";
			exit(0);
		}
		else if (mark[u]==0)
			dfs(u);
	}
	mark[v]=2;
	ans+=v+'a';
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> name[i];
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j){
			int ind=0;
			int len=min(name[i].size(),name[j].size());
			while (ind<len && name[i][ind]==name[j][ind])
				++ind;
			if (ind<len)
				adj[name[i][ind]-'a'].push_back(name[j][ind]-'a');
			else if (name[i].size()>name[j].size()){
				cout << "Impossible";
				exit(0);
			}
		}
	for (int i=0;i<26;++i)
		if (mark[i]==false)
			dfs(i);
	reverse(ans.begin(),ans.end());
	cout << ans;
}