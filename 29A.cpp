#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int x[MaxN],d[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> x[i] >> d[i];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (x[i]+d[i]==x[j] && x[j]+d[j]==x[i]){
				cout << "YES";
				return 0;
			}
	cout << "NO";
}