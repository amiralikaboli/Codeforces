#include <iostream>
#include <vector>

using namespace std;

int t[30];
vector <char> v;

int main (){
	int k;
	string s;
	cin >> k >> s;
	for (int i=0;i<s.size();++i)
		++t[s[i]-'a'];
	for (int i=0;i<30;++i)
		if (t[i]%k){
			cout << -1;
			return 0;
		}
	for (int i=0;i<30;++i)
		for (int j=0;j<t[i]/k;++j)
			v.push_back(i+'a');
	for (int i=0;i<k;++i)
		for (int j=0;j<v.size();++j)
			cout << char(v[j]);
}