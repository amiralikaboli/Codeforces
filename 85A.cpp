#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s="abcdefghijklmnopqrstuvwxyz";
	if (n%2){
		for (int i=0;i<n/2;++i)
			cout << s[i%2] << s[i%2];
		cout << "p" << endl;
		for (int i=0;i<n/2;++i)
			cout << s[2+i%2] << s[2+i%2];
		cout << "p" << endl;
		cout << "q";
		for (int i=0;i<n/2;++i)
			cout << s[i%2] << s[i%2];
		cout << endl << "q";
		for (int i=0;i<n/2;++i)
			cout << s[2+i%2] << s[2+i%2];
	}
	else{
		for (int i=0;i<n/2;++i)
			cout << s[i%2] << s[i%2];
		cout << endl << "p";
		for (int i=0;i<n/2-1;++i)
			cout << s[2+i%2] << s[2+i%2];
		cout << "q" << endl;
		cout << "p";
		for (int i=0;i<n/2-1;++i)
			cout << s[4+i%2] << s[4+i%2];
		cout << "q" << endl;
		for (int i=0;i<n/2;++i)
			cout << s[i%2] << s[i%2];
	}
}