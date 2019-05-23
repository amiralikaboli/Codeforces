#include <iostream>
#include <vector>

using namespace std;

const int MaxArr=55;
const int MaxN=5000+10;
const int MaxL=250*1000+10;
vector <long long> v[MaxArr];
vector <long long> arr;
long long ans_s[MaxN],ans_e[MaxN],ans_cngle[MaxN],dp_cngle[MaxN],dp[MaxL],sum[MaxN];

int main(){
/*input & sum*/
	int n,l;
	cin >> n >> l;
	for (int i=0;i<n;++i){
		int t;
		cin >> t;
		for (int j=0;j<t;++j){
			int a;
			cin >> a;
			v[i].push_back(a);
			sum[i]+=a;
		}
	}
	for (int i=0;i<l;++i){
		int a;
		cin >> a;
		arr.push_back(--a);
	}
/*find ans*/
	for (int i=0;i<n;++i){
		dp_cngle[0]=v[i][0];
		long long mx=dp_cngle[0];
		for (int j=1;j<v[i].size();++j){
			dp_cngle[j]=max(dp_cngle[j-1]+v[i][j],v[i][j]);
			mx=max(mx,dp_cngle[j]);
		}
		ans_cngle[i]=mx;
		ans_e[i]=dp_cngle[v[i].size()-1];
	}
	for (int i=0;i<n;++i){
		dp_cngle[v[i].size()-1]=v[i][v[i].size()-1];
		for (int j=v[i].size()-2;j>=0;--j)
			dp_cngle[j]=max(dp_cngle[j+1]+v[i][j],v[i][j]);
		ans_s[i]=dp_cngle[0];
	}
/*org dp*/
	if (l==1){
		cout << ans_cngle[arr[0]];
		return 0;
	}
	dp[1]=ans_e[arr[0]]+ans_s[arr[1]];
	for (int i=2;i<l;++i)
		dp[i]=max(dp[i-1]-ans_s[arr[i-1]]+sum[arr[i-1]]+ans_s[arr[i]],ans_s[arr[i]]+ans_e[arr[i-1]]);
/*output*/
	long long cnt=ans_cngle[arr[0]];
	for (int i=1;i<l;++i){
		cnt=max(cnt,dp[i]);
		cnt=max(cnt,ans_cngle[arr[i]]);
	}
	cout << cnt;
}