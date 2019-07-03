#include <iostream>

using namespace std;

bool b[30];

int main(){
	int n;
	cin >> n;
	char c;
	for (int i=0;i<n;++i){
		cin >> c;
		if (c>='A' && c<='Z')
			c-='A';
		else
			c-='a';
		b[c]=true;
	}
	for (int i=0;i<26;++i)
		if (b[i]==false){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}