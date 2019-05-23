#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n,d;
	cin >> n >> d;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int t=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (i!=j && ghadr(a[i]-a[j])<=d)
				++t;
	cout << t;
}