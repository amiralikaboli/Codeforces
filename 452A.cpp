#include <bits/stdc++.h>

using namespace std;

vector <string> pokemon[10];

int main(){
	pokemon[6].push_back("espeon");
	pokemon[7].push_back("jolteon");
	pokemon[7].push_back("flareon");
	pokemon[7].push_back("umbreon");
	pokemon[7].push_back("sylveon");
	pokemon[7].push_back("glaceon");
	pokemon[7].push_back("leafeon");
	pokemon[8].push_back("vaporeon");
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s.size()==6 || s.size()==8){
		cout << pokemon[s.size()][0];
		return 0;
	}
	for (int i=0;i<6;++i){
		bool b=true;
		for (int j=0;j<7;++j)
			if (s[j]!='.' && pokemon[7][i][j]!=s[j])
				b=false;
		if (b==true){
			cout << pokemon[7][i];
			return 0;
		}
	}

}