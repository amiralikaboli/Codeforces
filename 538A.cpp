#include <bits/stdc++.h>

using namespace std;

char c[15]={'C','O','D','E','F','O','R','C','E','S'};
vector <int> v;

int main (){
	string s;
	cin >> s;
	string cf="CODEFORCES";
	for (int i=0;i<s.size();++i)
		for (int j=i;j<s.size();++j){
			string cck=s;
			cck.erase(cck.begin()+i,cck.begin()+j+1);
			if (cck==cf){
				cout << "YES";
				return 0;
			}
		}
	cout << "NO";
}