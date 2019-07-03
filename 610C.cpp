#include <bits/stdc++.h>

using namespace std;

const int MaxN=(1<<10)+10;
int dp[MaxN][MaxN];

int main(){
	ios::sync_with_stdio(false); cin.tie();
	int k;
	cin >> k;
	dp[0][0]=1;
	for (int t=1;t<=k;++t){
//up right
		for (int i=0;i<(1<<t-1);++i)
			for (int j=(1<<t-1);j<(1<<t);++j)
				dp[i][j]=dp[i][j-(1<<t-1)];
//down left
		for (int i=(1<<t-1);i<(1<<t);++i)
			for (int j=0;j<(1<<t-1);++j)
				dp[i][j]=dp[i-(1<<t-1)][j];
//down right
		for (int i=(1<<t-1);i<(1<<t);++i)
			for (int j=(1<<t-1);j<(1<<t);++j)
				dp[i][j]=-dp[i-(1<<t-1)][j-(1<<t-1)];
	}
	for (int i=0;i<(1<<k);++i){
		for (int j=0;j<(1<<k);++j)
			if (dp[i][j]==1)
				cout << "+";
			else if (dp[i][j]==-1)
				cout << "*";
			else
				cout << "#";
		cout << endl;
	}
}