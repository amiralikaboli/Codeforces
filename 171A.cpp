#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x;
	cin >> n >> x;
	int rev=0;
	while (x){
		rev*=10;
		rev+=x%10;
		x/=10;
	}
	cout << rev+n;
}