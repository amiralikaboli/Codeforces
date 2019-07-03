#include <bits/stdc++.h>

using namespace std;

const int MaxN=500+10;
int dp[2][MaxN][MaxN];
char c[MaxN][MaxN];

int get(int p,int x1,int y1,int x2,int y2){
	return dp[p][x2][y2]-dp[p][x2][y1]-dp[p][x1][y2]+dp[p][x1][y1];
}

int main(){
	int n, m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> c[i][j];
	for (int i=0;i<n;++i)
		for (int j=1;j<m;++j)
			if (c[i][j]=='.' && c[i][j-1]=='.')
				++dp[0][i+1][j+1];
	for (int i=1;i<n;++i)
		for (int j=0;j<m;++j)
			if (c[i][j]=='.' && c[i-1][j]=='.')
				++dp[1][i+1][j+1];
	for (int p=0;p<2;++p)
		for (int i=1;i<=n;++i)
			for (int j=1;j<=m;++j)
				dp[p][i][j]+=dp[p][i-1][j]+dp[p][i][j-1]-dp[p][i-1][j-1];
	int q;
	cin >> q;
	for (int i=0;i<q;++i){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << dp[0][x2][y2]-dp[0][x2][y1]-dp[0][x1-1][y2]+dp[0][x1-1][y1]+dp[1][x2][y2]-dp[1][x2][y1-1]-dp[1][x1][y2]+dp[1][x1][y1-1] << endl;
	}
}