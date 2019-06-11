#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ind=n;
	for (int i=0;i<s.size();++i)
		if (s[i]=='0'){
			ind=i+1;
			break;
		}
	cout << ind;
}