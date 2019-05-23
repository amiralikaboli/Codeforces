#include <bits/stdc++.h>

using namespace std;

int main(){
	int l;
	string s;
	cin >> l >> s;
	if (l==2){
		cout << s;
		return 0;
	}
	int ind=0;
	while (ind<l-3){
		cout << s[ind] << s[ind+1] << "-";
		ind+=2;
	}
	for (int i=ind;i<l;++i)
		cout << s[i];
}