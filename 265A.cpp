#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int ind=0;
	for (int i=0;i<t.size();++i)
		if (t[i]==s[ind])
			++ind;
	cout << ind+1;
}