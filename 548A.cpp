#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	if (s.size()%k){
		cout << "NO";
		return 0;
	}
	int l=s.size()/k;
	for (int i=0;i<k;++i)
		for (int j=0;j<=l/2;++j)
			if (s[i*l+j]!=s[i*l+l-1-j]){
				cout << "NO";
				return 0;
			}
	cout << "YES";
}