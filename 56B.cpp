#include <bits/stdc++.h>

using namespace std;

const int MaxN=1000+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ind1=0,ind2=0;
	for (int i=0;i<n;++i)
		if (a[i]!=i+1){
			ind1=i+1;
			ind2=a[i];
			reverse(a+i,a+a[i]);
			break;
		}
	for (int i=0;i<n;++i)
		if (a[i]!=i+1){
			cout << "0 0";
			return 0;
		}
	cout << ind1 << " " << ind2;
}