#include <iostream>
#include <algorithm>
using namespace std;
int a[111];
int main (){
	int n,m,sum=0;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort (a,a+n);
	for (int i=0;i<m;++i)
		if (a[i]<0)
			sum-=a[i];
	cout << sum;
}
