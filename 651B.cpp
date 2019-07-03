#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define double long double
#define f first
#define s second
#define pii pair<int,int>
#define point complex<ld>

const int MaxN=1E5+10;
const int MaxNum=1E3+10;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
multiset <int> st;
vector <int> num;
int t[MaxNum];

int32_t main(){
	int n;
	cin >> n;
	int mx=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x];
		mx=max(mx,t[x]);
	}
	cout << n-mx;
}