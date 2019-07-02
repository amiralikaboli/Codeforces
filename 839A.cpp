#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E6+10;
int a[MaxN];

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	if (k==0)
		return cout << 0, 0;
	int cnt=0;
	int sum=0;
	for (int i=0;i<n;++i){
		sum+=a[i];
		int x=min(sum,8);
		cnt+=x;
		sum-=x;
		if (cnt>=k)
			return cout << i+1, 0;
	}
	cout << -1;
}