#include <bits/stdc++.h>

using namespace std;

const int MaxN=500+10;
bool mark[MaxN][MaxN];
int mx[MaxN];

int main(){
	ios::sync_with_stdio(false);
	int n,m,q;
	cin >> n >> m >> q;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> mark[i][j];
	for (int i=0;i<n;++i){
		int t=0;
		for (int j=0;j<m;++j)
			if (mark[i][j]==true){
				++t;
				mx[i]=max(mx[i],t);
			}
			else
				t=0;
	}
	for (int ind=0;ind<q;++ind){
		int ans=0;
		int x,y;
		cin >> x >> y;
		--x;
		--y;
		mark[x][y]=!mark[x][y];
		int t=0;
		mx[x]=0;
		for (int i=0;i<m;++i)
			if (mark[x][i]==true){
				++t;
				mx[x]=max(mx[x],t);
			}
			else
				t=0;
		cout << *max_element(mx,mx+n) << endl;
	}
}