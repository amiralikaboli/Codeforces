#include <bits/stdc++.h>

using namespace std;

const int MaxN=10+10;
char c[MaxN][MaxN][MaxN];
bool mark[MaxN][MaxN][MaxN];
int k,n,m;
int dx[]={-1,1,0,0,0,0};
int dy[]={0,0,-1,1,0,0};
int dz[]={0,0,0,0,-1,1};

void dfs(int x,int y,int z){
	mark[x][y][z]=true;
	for(int i=0;i<6;++i){
		int t=x+dx[i];
		int a=y+dy[i];
		int e=z+dz[i];
		if (t<0 || a<0 || e<0)
			continue;
		if(mark[t][a][e]==false && c[t][a][e]=='.')
			dfs(t,a,e);
	}
}

int main(){
	cin >> n >> m >> k; 
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			for(int l=0;l<k;++l)
				cin >> c[i][j][l];
	int y,z;
	cin >> y >> z;
	--y;
	--z;
	dfs(0,y,z);
	int ans=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			for (int l=0;l<k;++l)
				ans+=mark[i][j][l];
	cout << ans;
}