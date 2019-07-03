#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int MaxN=1E3+10;
int row[MaxN],col[MaxN];

int C(int n){
	return n*(n-1)/2;
}

int main(){
	int n;
	cin >> n;
	char c;
	for (int i=0;i<n;++i)
			for (int j=0;j<n;++j){
				cin >> c;
				if (c=='C'){
					++row[i];
					++col[j];
				}
			}
	ll ans=0;
	for (int i=0;i<n;++i)
		ans+=C(row[i])+C(col[i]);
	cout << ans;
}
//:-)