#include <iostream>
#include <cmath>

using namespace std;

const int Max=1E5;
int a[Max];

int main (){
	int n;
	cin >> n;
	int q=ceil(sqrt(2*n))+1;
	a[2]=1;
	for (int i=3;i<=q;++i)
		a[i]=a[i-1]+i-1;
	int ind;
	for (int i=2;i<=q;++i)
		if (a[i]>=n/2){
			ind=i;
			break;
		}
	for (int i=ind;i<=q;++i)
		for (int j=2;j<=q;++j)
			if (a[i]+a[j]==n){
				cout << "YES";
				return 0;
			}
	cout << "NO";
}