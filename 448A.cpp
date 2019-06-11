#include <iostream>

using namespace std;

int a[5],b[5];

int main(){
	int n;
	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];
	cin >> n;
	int sa=a[0]+a[1]+a[2];
	int sb=b[0]+b[1]+b[2];
	if ((sa+4)/5+(sb+9)/10>n)
		cout << "NO";
	else
		cout << "YES";
}