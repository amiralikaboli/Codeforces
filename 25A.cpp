#include <iostream>

using namespace std;

int a[111];
int t[5];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	++t[a[0]%2];
	++t[a[1]%2];
	++t[a[2]%2];
	int x;
	if (t[0]>t[1])
		x=0;
	else
		x=1;
	for (int i=0;i<n;++i)
		if (a[i]%2!=x){
			cout << i+1 << " ";
			return 0;
		}
}