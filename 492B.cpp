#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

double a[1111];

int main (){
	int n,l;
	cin >> n >> l;
	for (int i=0;i<n;++i)
		cin >> a[i];
	if (n==1){
		cout << max(a[0],l-a[0]);
		return 0;
	}
	sort(a,a+n);
	double d=max(a[0],l-a[n-1]);
	for (int i=0;i<n-1;++i)
		d=max(d,(a[i+1]-a[i])/2);
	cout << fixed << setprecision(9) << d;
}