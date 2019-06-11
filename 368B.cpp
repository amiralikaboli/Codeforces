#include <iostream>
#include <set>

using namespace std;

const int MaxN=1E5+10;
bool mark[MaxN];
int a[MaxN],l[MaxN];
int dp[MaxN];

int main (){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<k;++i){
		cin >> l[i];
		--l[i];
	}
	for (int i=n-1;i>=0;--i){
		dp[i]=dp[i+1]+1-mark[a[i]];
		mark[a[i]]=true;
	}
	for (int i=0;i<k;++i)
		cout << dp[l[i]] << "\n";
}