#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	cout << (k/n==2 ? n-k%n : 0);
}