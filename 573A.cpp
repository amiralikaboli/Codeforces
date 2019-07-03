#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int find(int x){
	while (x%2==0)
		x/=2;
	while(x%3==0)
		x/=3;
	return x;
}

int main(){
	int n;
	cin >> n;
	cin >> a[0];
	int bmm=a[0];
	for (int i=1;i<n;++i){
		cin >> a[i];
		bmm=__gcd(bmm,a[i]);
	}
	//cerr << bmm << "\n";
	for (int i=0;i<n;++i){
		a[i]/=bmm;
	//	cerr << a[i] << " ";
	}
	int sum=0;
	for (int i=0;i<n;++i){
		a[i]=find(a[i]);
		sum+=a[i];
	}
	if (sum==n)
		cout << "Yes";
	else
		cout << "No";
}