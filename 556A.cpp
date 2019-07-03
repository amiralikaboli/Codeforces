#include <iostream>

using namespace std;

int t[5];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int l;
	cin >> l;
	string s;
	cin >> s;
	for (int i=0;i<l;++i)
		++t[s[i]-'0'];
	cout << ghadr(t[1]-t[0]);
}