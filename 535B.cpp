#include <iostream>

using namespace std;

int find(string s){
	long long t=1;
	for (int i=0;i<s.size();++i)
		if (s[i]=='4')
			s[i]=0;
		else if (s[i]=='7'){
			s[i]=1;
			t+=(1<<s.size()-i-1);
		}
	return t;
}

int main(){
	string s;
	cin >> s;
	cerr << find(s) << endl;
	cout << (1<<s.size())-2+find(s);
}