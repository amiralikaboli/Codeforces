#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E3+5;
char c[MaxN][MaxN];
int row[MaxN],col[MaxN];

int32_t main(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j){
			cin >> c[i][j];
			row[i]+=(c[i][j]=='*');
			col[j]+=(c[i][j]=='*');
		}
	int ans=0;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			if(c[i][j]=='*')
				ans+=(row[i]-1)*(col[j]-1);
	cout << ans;
}
