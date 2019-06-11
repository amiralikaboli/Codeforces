#include <bits/stdc++.h>

using namespace std;

vector <long long> ans;

long long power(long long n, long long k){
	long long p=1;
	for(long long i=0;i<k;++i)
		p*=n;
	return p;
}

long long sum(long long n){
	long long t=0;
	while(n!=0){
		t+=n%10;
		n/=10;
	}
	return t;
}

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long x=0;
	if(a==1)
		x=5e6;
	else if (a<=3)
		x=1e5;
	else 
		x=5e3;
	for(long long i=0;i<=x;++i){
		long long cnt=power(i,a)*b+c;
		if(sum(cnt)==i && cnt!=0 && cnt<=1000*1000*1000)
			ans.push_back(cnt);
	}
	cout << ans.size() << endl;
	for(long long i=0;i<ans.size();++i)
		cout << ans[i] << ' ';
	return 0;
}
