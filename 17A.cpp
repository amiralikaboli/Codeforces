#include <bits/stdc++.h>

using namespace std;

bool mark[3*1000+10];
vector <int> num;
vector <int> prime;

bool p(int x){
	for (int i=2;i*i<=x;++i)
		if (x%i==0)
			return false;
	return true;
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int x=2;x<=n;++x)
		if (p(x))
			prime.push_back(x);
	int t=0;
	for (int i=0;i<prime.size()-1;++i){
		int x=prime[i]+prime[i+1]+1;
		if (p(x) && x<=n)
			++t;
	}
	if (t>=k)
		cout << "YES";
	else
		cout << "NO";
}