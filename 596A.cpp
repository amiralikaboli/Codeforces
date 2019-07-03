#include <bits/stdc++.h>

using namespace std;

int x[5],y[5];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> x[i] >> y[i];
	if (n<2){
		cout << -1;
		return 0;
	}
	if (n==2 && (x[0]==x[1] || y[0]==y[1])){
		cout << -1;
		return 0;
	}
	if (n==2){
		cout << ghadr((x[0]-x[1])*(y[0]-y[1]));
		return 0;
	}
	int ind1,ind2;
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			if (x[i]!=x[j] && y[i]!=y[j]){
				ind1=i;
				ind2=j;
				break;
			}
	cout << ghadr((x[ind1]-x[ind2])*(y[ind1]-y[ind2]));
}