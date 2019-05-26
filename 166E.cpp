#include <bits/stdc++.h>

using namespace std;

const int delta=1000*1000*1000+7;

int main(){
	int n;
	cin >> n;
	long long sum=0;
	for (int i=2;i<=n;++i){
		if (i%2)
			sum=(sum-1)*3;
		else
			sum=(sum+1)*3;
		sum%=delta;
	}
	cout << sum;
}