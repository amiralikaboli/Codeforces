#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n,sum;
	cin >> n >> sum;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n,cmp);
	int ind=0;
	int t=0;
	while (t<sum){
		t+=a[ind];
		++ind;
	}
	cout << ind;
}