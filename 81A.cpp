#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int ind=s.size()-1;
	while (ind>=1){
		if (s[ind]==s[ind-1])
			s.erase(ind-1,2);
		--ind;
	}
	cout << s;
}