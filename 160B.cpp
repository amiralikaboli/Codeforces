#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	sort(s.begin(),s.begin()+n);
	sort(s.begin()+n,s.end());
	bool kch_a=false,kch_b=false;
	for (int i=0;i<n;++i){
		if (s[i]==s[i+n]){
			cout << "NO";
			return 0;
		}
		if (s[i]<s[i+n])
			kch_a=true;
		if (s[i]>s[i+n])
			kch_b=true;
	}
	if (kch_a && kch_b){
		cout << "NO";
		return 0;
	}
	cout << "YES";
}