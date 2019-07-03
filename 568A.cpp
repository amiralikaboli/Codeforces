#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E6+10;
bool prime[MaxN],pal[MaxN];

bool find_prime(){
	prime[1]=false;
	for (int i=2;i<MaxN;++i)
		if (prime[i])
			for (int j=2*i;j<MaxN;j+=i)
				prime[j]=false;
}

bool check_pal(int n){
	int x=n,t=0;
	while (x){
		t*=10;
		t+=x%10;
		x/=10;
	}
	return (n==t);
}

int32_t main(){
	fill (prime,prime+MaxN,true);
	find_prime();
	for (int i=1;i<MaxN;++i)
		pal[i]=check_pal(i);
	int p,q;
	cin >> p >> q;
	int ans=0;
	int cnt_pal=0,cnt_prime=0;
	for (int i=1;i<MaxN;++i){
		cnt_pal+=pal[i];
		cnt_prime+=prime[i];
		if ((cnt_prime*q)<=(cnt_pal*p))
			ans=i;
	}
	cout << ans;
}