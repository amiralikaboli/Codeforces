#include <bits/stdc++.h>

using namespace std;

int cnt_s[100],cnt_t[100];

char f(char c){
	if (c>='a' && c<='z')
		return c-'a';
	else
		return 26+c-'A';
}

char other(int x){
	return (x+26)%52;
}

int main(){
	string s,t;
	cin >> s >> t;
	for (int i=0;i<s.size();++i)
		++cnt_s[f(s[i])];
	for (int i=0;i<t.size();++i)
		++cnt_t[f(t[i])];
	int yay=0,whoops=0;
	for (int i=0;i<52;++i){
		int mn=min(cnt_s[i],cnt_t[i]);
		yay+=mn;
		cnt_s[i]-=mn;
		cnt_t[i]-=mn;
	}
	for (int i=0;i<52;++i){
		int mn=min(cnt_s[i],cnt_t[other(i)]);
		whoops+=mn;
		cnt_s[i]-=mn;
		cnt_t[other(i)]-=mn;
	}
	cout << yay << " " << whoops;
}