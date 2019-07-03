#include <iostream>
#include <vector>

using namespace std;

vector <int> v;

int main(){
	string s;
	cin >> s;
	char yekan=s[s.size()-1];
	for (int i=0;i<s.size();++i)
		if ((s[i]-'0')%2==0)
			v.push_back(i);
	if (v.size()==0){
		cout << -1;
		return 0;
	}
	for (int i=0;i<v.size();++i)
		if (yekan>s[v[i]]){
			swap(s[s.size()-1],s[v[i]]);
			cout << s;
			return 0;
		}
	swap(s[v[v.size()-1]],s[s.size()-1]);
	cout << s;
}