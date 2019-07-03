#include <bits/stdc++.h>

using namespace std;

int t[30];
vector <int> ans;
vector <int> odd_ind;

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		++t[s[i]-'a'];
	for (int i=0;i<30;++i)
		if (t[i]%2)
			odd_ind.push_back(i);
	if (s.size()%2==0){
		for (int i=0;i<odd_ind.size()/2;++i)
			++t[odd_ind[i]];
		for (int i=odd_ind.size()/2;i<odd_ind.size();++i)
			--t[odd_ind[i]];
		for (int i=0;i<30;++i)
			for (int j=0;j<t[i]/2;++j){
				cout << char(i+'a');
				ans.push_back(i);
			}
		for (int i=ans.size()-1;i>=0;--i)
			cout << char(ans[i]+'a');
	}
	else if (s.size()%2){
		for (int i=0;i<odd_ind.size()/2;++i)
			++t[odd_ind[i]];
		for (int i=odd_ind.size()/2+1;i<odd_ind.size();++i)
			--t[odd_ind[i]];
		for (int i=0;i<30;++i)
			for (int j=0;j<t[i]/2;++j){
				cout << char(i+'a');
				ans.push_back(i);
			}
		cout << char(odd_ind[odd_ind.size()/2]+'a');
		for (int i=ans.size()-1;i>=0;--i)
			cout << char(ans[i]+'a');
	}
}