#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x){
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
	int t=0;
	for (int i=1;t<n;++i)
		if (is_prime(i)){
			cout << i << " ";
			++t;
		}
}