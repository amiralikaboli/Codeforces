#include <bits/stdc++.h>

using namespace std;

deque <char> deq;

int main(){
	string s;
	cin >> s;
	deq.push_front('#');
	for (int i=0;i<s.size();++i)
		if (s[i]==deq.front())
			deq.pop_front();
		else
			deq.push_front(s[i]);
	cout << (deq.front()=='#' ? "YES" : "NO");
}