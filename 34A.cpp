#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int mn=ghadr(a[0]-a[n-1]);
	int ind_f=1,ind_s=n;
	for (int i=1;i<n;++i)
		if (mn>ghadr(a[i]-a[i-1])){
			mn=ghadr(a[i]-a[i-1]);
			ind_f=i;
			ind_s=i+1;
		}
	cout << ind_f << " " << ind_s;
}