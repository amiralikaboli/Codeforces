#include <bits/stdc++.h>

using namespace std;

int t[5];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		t[i%3]+=a;
	}
	if (t[0]>t[1] && t[0]>t[2])
		cout << "chest";
	else if (t[1]>t[0] && t[1]>t[2])
		cout << "biceps";
	else if (t[2]>t[0] && t[2]>t[1])
		cout << "back";
}