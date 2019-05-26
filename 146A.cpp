#include <iostream>

using namespace std;

int main (){
	int n,sum=0,cnt=0;
	string s;
	cin >> n >> s;
	for (int i=0;i<n;++i){
		sum+=s[i]-'0';
		if (s[i]!='4' && s[i]!='7'){
			cout << "NO";
			return 0;
		}
	}
	for (int i=0;i<n/2;++i)
		cnt+=s[i]-'0';
	if (cnt==sum-cnt)
		cout << "YES";
	else
		cout << "NO";
}