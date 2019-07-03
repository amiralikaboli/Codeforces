#include <iostream>
#include <algorithm>

using namespace std;

const int Max=1E5+10;
int a[Max],b[Max],c[Max];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n-1;++i)
		cin >> b[i];
	for (int i=0;i<n-2;++i)
		cin >> c[i];
	sort(a,a+n);
	sort(b,b+(n-1));
	sort(c,c+(n-2));
	bool q=false;
	for (int i=0;i<n-1;++i)
		if (a[i]!=b[i]){
			q=true;
			cout << a[i] << endl;
			break;
		}
	if (q==false)
		cout << a[n-1] << endl;
	q=false;
	for (int i=0;i<n-2;++i)
		if (b[i]!=c[i]){
			q=true;
			cout << b[i] << endl;
			break;
		}
	if (q==false)
		cout << b[n-2] << endl;
}