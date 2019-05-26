#include <bits/stdc++.h>

using namespace std;

#define int long long

int tav[20];
vector <int> lcknum;

void prcs(int x,int t){
	int num=0;
	for (int i=0;i<t;++i)
		if (x&(1<<i))
			num+=7*tav[i];
		else
			num+=4*tav[i];
	lcknum.push_back(num);
}

void find_lucky_number(){
	for (int t=1;t<=10;++t)
		for (int i=0;i<(1<<t);++i)
			prcs(i,t);
}

int32_t main(){
	tav[0]=1;
	for (int i=1;i<12;++i)
		tav[i]=tav[i-1]*10;
	int l,r;
	cin >> l >> r;
	find_lucky_number();
	/*if (l==r){
		int x=*lower_bound(lcknum.begin(),lcknum.end(),l);
		cout << x;
		return 0;
	}*/
	int ans=0;
	while (l<=r){
		int x=*lower_bound(lcknum.begin(),lcknum.end(),l);
		int cnt=min(x-l+1,r-l+1);
		cnt=max(cnt,0LL);
		ans+=cnt*x;
		l=x+1;
	}
	cout << ans;
}