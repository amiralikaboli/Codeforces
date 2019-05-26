#include <bits/stdc++.h>

using namespace std;

const int MaxNM=100+10;
char c[MaxNM][MaxNM];
char mx[MaxNM];
bool mark[MaxNM];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			cin >> c[i][j];
			mx[j]=max(mx[j],c[i][j]);
		}
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			if (mx[j]==c[i][j])
				mark[i]=true;
	int ans=0;
	for (int i=0;i<n;++i)
		ans+=mark[i];
	cout << ans;
}