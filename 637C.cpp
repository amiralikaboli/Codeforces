#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=2E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
string s[MaxN];

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return cnt*cnt; else return n*cnt*cnt;}

int DifferInd(string a,string b){
	int cnt=0;
	for (int i=0;i<a.size();++i)
		cnt+=(a[i]!=b[i]);
	return cnt;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> s[i];
	if (n==1){
		cout << 6;
		return 0;
	}
	int mn=INF;
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			mn=min(mn,DifferInd(s[i],s[j]));
	cout << max(0LL,(mn-1)/2);
}