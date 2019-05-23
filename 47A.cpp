#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	n*=2;
	int x=sqrt(n);
	if (x*x+x==n)
		cout << "YES";
	else
		cout << "NO";
}