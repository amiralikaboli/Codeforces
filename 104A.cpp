#include <bits/stdc++.h>

using namespace std;

int t[30]={0,4,4,4,4,4,4,4,4,4,15,4};

int main(){
	int n;
	cin >> n;
	cout << t[max(n-10,0)];
}