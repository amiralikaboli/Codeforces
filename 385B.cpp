#include <bits/stdc++.h>

using namespace std;

vector <int> ind;

int main(){
	string s;
	cin >> s;
	if (s.size()<4){
		cout << 0;
		return 0;
	}
	for (int i=0;i<s.size()-3;++i)
		if (s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r')
			ind.push_back(i);
	if (ind.size()==0){
		cout << 0;
		return 0;
	}
	int ans=(ind[0]+1)*(s.size()-ind[0]-3);
	for (int i=1;i<ind.size();++i)
		ans+=(ind[i]-ind[i-1])*(s.size()-ind[i]-3);
	cout << ans;
}