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
int n;

int sumDigit(int x){
	int cnt=0;
	while(x){
		cnt+=x%10;
		x/=10;
	}
	return cnt;
}

int32_t main(){
	cin >> n;
	for(int i=1;i<500;++i){
		int cnt=i*i+4*n;
		int jazr=sqrt(cnt);
		if(jazr*jazr!=cnt)
			continue;
		int ans=jazr-i;
		if(ans%2)
			continue;
		if(sumDigit(ans/2)!=i)
			continue;
		cout << ans/2;
		return 0;
	}
	cout << -1;
}