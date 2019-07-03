#include <bits/stdc++.h>

using namespace std;

bool prime(int x){
	if (x==1)
		return false;
	for (int i=2;i*i<=x;++i)
		if (x%i==0)
			return false;
	return true;
}

int main(){
	int n;
	cin >> n;
	if (prime(n)==true){
		cout << 1 << endl;
		cout << n << endl;
		return 0;
	}
	if (prime(n-2)==true){
		cout << 2 << endl;
		cout << 2 << " " << n-2 << endl;
		return 0;
	}
	cout << 3 << endl;
	int k=n;
	while (prime(k)==false)
		k--;
	cout << k << " ";
	n-=k;
	for (int i=1;i<=n;++i)
		if (prime(i)==true && prime(n-i)==true){
			cout << i << " " << n-i << endl;
			return 0;
		}
}