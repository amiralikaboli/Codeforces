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
set <int> st;
vector <int> ans;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		st.insert(x);
	}
	for (int i=1;i<=m;++i)
		if (st.find(i)==st.end()){
			m-=i;
			ans.push_back(i);
		}
	cout << ans.size() << endl;
	for (int i=0;i<ans.size();++i)
		cout << ans[i] << " ";
}