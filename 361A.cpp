#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<k%n;++i)
		a[i]=(k+n-1)/n;
	for (int i=k%n;i<n;++i)
		a[i]=k/n;
	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j)
			cout << a[(i+j)%n] << " ";
		cout << endl;
	}
}