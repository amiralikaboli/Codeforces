#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
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
vector <int> dig;

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k){ if(k==0) return 1; int cnt=bpow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*cnt*cnt)%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int ind;
	cin >> ind;
	--ind;
	for (int i=1;i<400;++i){
		int x=i;
		vector <int> num;
		while (x){
			num.pb(x%10);
			x/=10;
		}
		reverse(num.begin(),num.end());
		for (int j=0;j<num.size();++j)
			dig.pb(num[j]);
	}
	cout << dig[ind];
}