#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=5E6+10;
int dp[MaxN];
vector <int> p;

void find_prime(){
	for (int i=2;i<=sqrt(MaxN)+1;++i){
		bool b=true;
		for (int j=2;j*j<=i;++j)
			if (i%j==0){
				b=false;
				break;
			}
		if (b)
			p.push_back(i);
	}
}

void calc_dp(){
	dp[1]=0;
	for (int i=2;i<MaxN;++i){
		dp[i]=1;
		for (int j=0;j<p.size();++j)
			if (i%p[j]==0){
				dp[i]=dp[i/p[j]]+1;
				break;
			}
	}
	for (int i=2;i<MaxN;++i)
		dp[i]+=dp[i-1];
}

int32_t main(){
	find_prime();
	calc_dp();
	int t;
	cin >> t;
	for (int i=0;i<t;++i){
		int a,b;
		scanf("%d %d",&a,&b);
		int ans=dp[a]-dp[b];
		printf("%d\n",ans);
	}
}