#include <bits/stdc++.h>

using namespace std;

int n,k;

char ffpc(char a, char b){
	for (int i=0;i<k;++i){
		char c=i+'A';
		if (c!=a && c!=b)
			return char(c);
	}
}

int main(){
	cin >> n >> k;
	string s;
	cin >> s;
	if (k==2){
		int cnt=0;
		for (int i=0;i<n;++i)
			if (i%2==0 && s[i]!='A')
				++cnt;
			else if (i%2 && s[i]!='B')
				++cnt;
		if (cnt<=n-cnt){
			cout << cnt << endl;
			for (int i=0;i<n;++i)
				if (i%2==0)
					cout << 'A';
				else
					cout << 'B';
		}
		else{
			cout << n-cnt << endl;
			for (int i=0;i<n;++i)
				if (i%2==0)
					cout << 'B';
				else
					cout << 'A';
		}
		return 0;
	}
	int last=0,cnt=0;
	s+='!';
	string str="";
	for (int i=1;i<=n;++i)
		if (s[i]!=s[last]){
			str+=s[last];
			for (int j=1;j<i-last-1;++j)
				if (j%2){
					str+=ffpc(s[last],'#');
					++cnt;
				}
				else
					str+=s[last];
			if (i-last-1>0){
				if ((i-last-1)%2){
					str+=ffpc(s[last],s[i]);
					++cnt;
				}
				else
					str+=s[last];
			}
			last=i;
		}
	cout << cnt << endl << str;
}