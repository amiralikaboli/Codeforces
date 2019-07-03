#include <iostream>

using namespace std;

const int MaxN=100*1000+10;
int a[MaxN],b[MaxN];

int main (){
	int n1,n2,k,m;
	cin >> n1 >> n2 >> k >> m;
	for (int i=0;i<n1;++i)
		cin >> a[i];
	for (int i=0;i<n2;++i)
		cin >> b[i];
	if (a[k-1]<b[n2-m])
		cout << "YES";
	else
		cout << "NO";
}