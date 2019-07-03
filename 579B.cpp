#include <bits/stdc++.h>

using namespace std;

const int MaxN=2*400+10;
int a[MaxN][MaxN];
bool mark[MaxN][MaxN];
int ans[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<2*n;++i)
		for (int j=0;j<i;++j){
			int v;
			cin >> v;
			a[i][j]=v;
			a[j][i]=v;
		}
	for (int ind=0;ind<n;++ind){
		int x=-1,y=-1;
		int cnt=0;
		for (int i=0;i<2*n;++i)
			for (int j=0;j<2*n;++j)
				if (cnt<a[i][j] && mark[i][j]==false){
					x=i;
					y=j;
					cnt=a[i][j];
				}
		for (int i=0;i<2*n;++i){
			mark[i][x]=true;
			mark[x][i]=true;
			mark[i][y]=true;
			mark[y][i]=true;
		}
		ans[x]=y+1;
		ans[y]=x+1;
	}
	for (int i=0;i<2*n;++i)
		cout << ans[i] << " ";
}