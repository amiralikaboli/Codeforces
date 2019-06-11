#include <iostream>

using namespace std;

int a[1111];
int d[5];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int p1=0,p2=n-1;
	for (int i=0;i<n;++i){
		if (a[p1]>=a[p2]){
			d[i%2]+=a[p1];
			++p1;
		}
		else if (a[p2]>a[p1]){
			d[i%2]+=a[p2];
			--p2;
		}
	}
	cout << d[0] << " " << d[1];
}