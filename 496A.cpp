#include <iostream>

using namespace std;

int a[111];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int mn=1000*1000*1000;
	for (int i=1;i<n-1;++i)
		mn=min(mn,a[i+1]-a[i-1]);
	for (int i=0;i<n-1;++i)
		mn=max(mn,a[i+1]-a[i]);
	cout << mn;
}