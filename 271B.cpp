#include <bits/stdc++.h>

using namespace std;

const int MaxN=500+10;
const int MaxM=500+10;
const int MaxAi=1E5+10;
int a[MaxN][MaxM];
int row[MaxN];
int col[MaxM];
vector <int> prime;

bool isPrime(int x){
	for (int i=2;i*i<=x;++i)
		if (x%i==0)
			return false;
	return true;
}

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> a[i][j];
	for (int i=2;i<MaxAi+100;++i)
		if (isPrime(i))
			prime.push_back(i);
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			int x=*lower_bound(prime.begin(),prime.end(),a[i][j])-a[i][j];
			row[i]+=x;
			col[j]+=x;
		}
	int mn_row=*min_element(row,row+n);
	int mn_col=*min_element(col,col+m);
	cout << min(mn_row,mn_col);
}