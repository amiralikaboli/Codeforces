#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=10+10;
const int INF=1E9+7;
int p[]={0,1,2,3,4,5,6,7,8,9};
string s[MaxN];

int32_t main(){
	int n, k;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> s[i];
		reverse(s[i].begin(),s[i].end());
	}
	int mx=0,mn=INF;
	for (int i=0;i<n;++i){
		int num=0;
		int tav=1;	
		for (int j=0;j<k;++j){
			num+=(s[i][j]-'0')*tav;
			tav*=10;
		}
		mn=min(mn,num);
		mx=max(mx,num);
	}
	int ans=mx-mn;
	while (next_permutation(p,p+k)){
		mx=0,mn=INF;
		for (int i=0;i<n;++i){
			int num=0;
			int tav=1;
			for (int j=0;j<k;++j){
				num+=(s[i][p[j]]-'0')*tav;
				tav*=10;
			}
			mn=min(mn,num);
			mx=max(mx,num);
		}
		ans=min(ans,mx-mn);
	}
	cout << ans;
}