#include <bits/stdc++.h>

using namespace std;

vector <string> v;

int main(){
	string s;
	while (getline(cin,s))
		v.push_back(s);
	int mx_len=0;
	for (int i=0;i<v.size();++i)
		mx_len=max(mx_len,(int)v[i].size());
	bool b=false;
	for (int i=0;i<mx_len+2;++i)
		cout << "*";
	cout << endl;
	for (int i=0;i<v.size();++i){
		cout << "*";
		for (int j=0;j<(mx_len-(int)v[i].size()+b)/2;++j)
			cout << " ";
		cout << v[i];
		for (int j=0;j<(mx_len-(int)v[i].size()+!b)/2;++j)
			cout << " ";
		cout << "*\n";
		if ((mx_len-(int)v[i].size())%2)
			b=!b;
	}
	for (int i=0;i<mx_len+2;++i)
		cout << "*";
}
//:-(