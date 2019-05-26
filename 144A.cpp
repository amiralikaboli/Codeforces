#include <iostream>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	int mn=111;
	int mx=0;
	int ind_mn=-1;
	int ind_mx=-1;
	for (int i=0;i<n;++i){
		cin >> a[i];
		if (a[i]>mx){
			mx=a[i];
			ind_mx=i;
		}
		if (a[i]<=mn){
			mn=a[i];
			ind_mn=i;
		}
	}
	if (ind_mn<ind_mx)
		++ind_mn;
	//cerr << ind_mx << " " << ind_mn << endl;
	cout << ind_mx+n-1-ind_mn;
}