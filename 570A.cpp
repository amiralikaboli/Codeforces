#include <iostream>
#include <algorithm>

using namespace std;

const int MaxN=100+10;
int a[MaxN][MaxN];
int t[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<k;++i)
		for (int j=0;j<n;++j)
			cin >> a[i][j];
	for (int i=0;i<k;++i){
		int ind;
		int mx=-1;
		for (int j=0;j<n;++j)
			if (mx<a[i][j]){
				mx=a[i][j];
				ind=j;
			}
		++t[ind];
	}
	int mx=-1;
	int ind;
	for (int i=0;i<100;++i)
		if (mx<t[i]){
			ind=i;
			mx=t[i];
		}
	cout << ind+1;
}