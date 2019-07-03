#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

const int MaxN=5E5+10;
pii dp[MaxN];
int per[10];

int fact(int n){
	if (n==1)
		return 1;
	return n*fact(n-1);
}

bool cmp(pii a,pii b){
	if (a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		per[i]=i+1;
	for (int t=0;t<fact(n);++t){
		dp[t].second=t;
		for (int i=0;i<n;++i)
			for (int j=i;j<n;++j)
				dp[t].first+=*min_element(per+i,per+j+1);
		next_permutation(per,per+n);
	}
	sort(dp,dp+fact(n),cmp);
	for (int i=0;i<n;++i)
		per[i]=i+1;
	--k;
	int ind=dp[k].second;
	for (int i=0;i<ind;++i)
		next_permutation(per,per+n);
	for (int i=0;i<n;++i)
		cout << per[i] << " ";
}