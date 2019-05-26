#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E9+10;

int find(int n,int k){
	int x=n;
	int ans=0;
	while (x){
		ans+=x;
		x/=k;
	}
	return ans;
}

int main(){
	int n,k;
	cin >> n >> k;
	int s=1,e=MaxN;
	for (int i=0;i<log2(MaxN);++i){
		int mid=(s+e)/2;
		if (find(mid,k)>=n)
			e=mid;
		else
			s=mid;
	}
	cout << e;
}