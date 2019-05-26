#include <iostream>

using namespace std;

int a[111];

int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;++i)
		cin >> a[i];
	for (int i=1;i<=n;++i)
		for (int j=1;j<=n;++j)
			if (i==a[j])
				cout << j << " ";
}