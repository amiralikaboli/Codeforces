#include <bits/stdc++.h>

using namespace std;

vector <pair <long long,long long> > ans;

long long C(long long n){
	return n*(n-1)/2;
}

long long sum_pow(long long n){
	return (n*(n+1)*(2*n+1))/6;
}

int main(){
	long long n;
	cin >> n;
	for (long long i=1;i<=pow(4*n,.34);++i){
		long long x;
		if ((n+C(i+1)*i-sum_pow(i))%C(i+1)==0){
			x=(n+C(i+1)*i-sum_pow(i))/C(i+1);
			if (x>=i){
				pair <long long,long long> p=make_pair(i,x);
				ans.push_back(p);
			}
		}
	}
	long long t=ans.size()*2;
	bool b=false;
	if (ans[ans.size()-1].first==ans[ans.size()-1].second){
		--t;
		b=true;
	}
	cout << t << endl;
	for (long long i=0;i<ans.size();++i)
		cout << ans[i].first << " " << ans[i].second << endl;
	long long l=ans.size()-b;
	for (long long i=l-1;i>=0;--i)
		cout << ans[i].second << " " << ans[i].first << endl;
}