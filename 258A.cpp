#include <iostream>
using namespace std;
int main (){
	string s,t;
	cin >> s;
	t=s;
	int cnt=0;
	while (s[cnt]=='1' && cnt<s.size ()){
		++cnt;
	}
	if (cnt==s.size ()){
		for (int i=1;i<s.size ();++i)
			cout << s[i];
		return 0;
	}
	for (int i=0;i<cnt;++i)
		cout << s[i];
	for (int i=cnt+1;i<s.size ();++i)
		cout << s[i];
	return 0;
}
