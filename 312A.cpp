#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;++i){
		string s;
		getline(cin,s);
		int cnt=0;
		if(s.size()>=5 && s.substr(0,5)=="miao.")
			++cnt;
		if(s.size()>=5 && s.substr(s.size()-5,5)=="lala.")
			--cnt;
		if(cnt==-1)
			cout << "Freda's\n";
		else if(cnt==1)
			cout << "Rainbow's\n";
		else
			cout << "OMG>.< I don't know!\n";
	}
}
