#include <bits/stdc++.h>

using namespace std;

const int INF=1E9+7;

int main(){
	int n;
	cin >> n;
	int sum=0;
	int mn=INF,cnt=0;
	for(int i=0;i<2*n-1;++i){
		int x;
		cin >> x;
		sum+=abs(x);
		mn=min(mn,abs(x));
		if(x<0)
			++cnt;
	}
	if(n%2==0 && cnt%2)
		sum-=2*mn;
	cout << sum;
}