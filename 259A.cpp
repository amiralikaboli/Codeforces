#include <bits/stdc++.h>

using namespace std;

int main(){
	for (int i=0;i<8;++i){
		string s;
		cin >> s;
		for (int j=1;j<8;++j)
			if (s[j]==s[j-1]){
				cout << "NO";
				return 0;
			}
	}
	cout << "YES";
}