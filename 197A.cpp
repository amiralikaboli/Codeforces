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
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int32_t main(){
	int a,b,r;
	cin >> a >> b >> r;
	int mn=min(a,b);
	cout << (2*r<=mn ? "First" : "Second");
}