#include <bits/stdc++.h>

using namespace std;

#define ld long double

const int MaxN=2E5+10;
int a[MaxN];
vector <int> ind;

int main(){
	int n;
	cin >> n;
	ld avg=0;
	for (int i=0;i<n;++i){
		cin >> a[i];
		avg+=a[i];
	}
	avg/=1LL*n;
	for (int i=0;i<n;++i)
		if (avg==a[i])
			ind.push_back(i+1);
	cout << ind.size() << endl;
	for (int i=0;i<ind.size();++i)
		cout << ind[i] << " ";
}