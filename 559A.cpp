#include <iostream>

using namespace std;

int a[10];

int main (){
	for (int i=0;i<6;++i)
		cin >> a[i];
	int d=min(a[1],a[5]);
	int ans=((2*a[0]+1)+(2*a[0]+1+2*d-2))*d/2;
	//cerr << ((2*a[0]+1)+(2*a[0]+1+2*d-2))*d/2 << " ";
	int h=max(a[1],a[5])-d;
	ans+=(2*a[0]+2*d)*h;
	//cerr << (2*a[0]+2*d)*h << " ";
	int t=min(a[2],a[4]);
	ans+=((2*a[3]+1)+(2*a[3]+1+2*t-2))*t/2;
	//cerr << ((2*a[3]+1)+(2*a[3]+1+2*t-2))*t/2 << " ";
	cout << ans;
}