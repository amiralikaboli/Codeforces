#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size()/2;++i)
		if (s[i]!=s[s.size()-1-i]){
			int b=2;
			for (int j=0;j<(s.size()-1-2*i)/2;++j)
				if (s[j+i+1]!=s[s.size()-1-i-j]){
					--b;
					break;
				}
			if (b==2){
				for (int j=0;j<=s.size()-1-i;++j)
					cout << s[j];
				cout << s[i];
				for (int j=s.size()-i;j<s.size();++j)
					cout << s[j];
				return 0;
			}
			for (int j=0;j<(s.size()-1-2*i)/2;++j)
				if (s[j+i]!=s[s.size()-2-i-j]){
					--b;
					break;
				}
			if (b==1){
				for (int j=0;j<i;++j)
					cout << s[j];
				cout << s[s.size()-1-i];
				for (int j=i;j<s.size();++j)
					cout << s[j];
				return 0;
			}
			if (b==0){
				cout << "NA";
				return 0;
			}
		}
	int ind=s.size()/2;
	for (int i=0;i<=ind;++i)
		cout << s[i];
	cout << s[ind];
	for (int i=ind+1;i<s.size();++i)
		cout << s[i];
}