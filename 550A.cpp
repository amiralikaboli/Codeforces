#include <iostream>
#include <vector>

using namespace std;

vector <int> a,b;

int ghadr(int x){
	return max(x,-x);
}

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i){
		if (s[i]=='A' && s[i+1]=='B')
			a.push_back(i);
		if (s[i]=='B' && s[i+1]=='A')
			b.push_back(i);
	}
	if (a.size()==0 || b.size()==0){
		cout << "NO";
		return 0;
	}
	for (int i=0;i<a.size();++i)
		for (int j=0;j<b.size();++j)
			if (ghadr(a[i]-b[j])!=1){
				cout << "YES";
				return 0;
			}
	cout << "NO";
}