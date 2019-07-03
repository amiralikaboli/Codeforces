#include <iostream>

using namespace std;

int a[111];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ind,mx=0;
	for (int cnt=0; ;++cnt){
		mx=0;
		for (int i=1;i<n;++i)
			if (mx<a[i]){
				mx=max(mx,a[i]);
				ind=i;
			}
		if (a[0]>a[ind]){
			cout << cnt;
			return 0;
		}
		--a[ind];
		++a[0];
	}
}