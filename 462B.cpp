#include <bits/stdc++.h>

using namespace std;

long long t[30];

bool cmp(long long a,long long b){
	return a>b;
}

int main(){
	long long n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (long long i=0;i<s.size();++i)
		++t[s[i]-'A'];
	sort(t,t+30,cmp);
	long long ans=0;
	for (long long i=0;i<30;++i){
		long long x=min(k,t[i]);
		ans+=x*x;
		k-=x;
	}
	cout << ans;
}