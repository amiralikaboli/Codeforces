#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
vector <int> bish,kam;

bool cmp(int a,int b){
	return a>b;
}

string pod(string s){
	if (s=="<=")
		return ">";
	if (s==">=")
		return "<";
	if (s=="<")
		return ">=";
	if (s==">")
		return "<=";
}

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		string s;
		int x;
		char c;
		cin >> s >> x >> c;
		if (c=='N')
			s=pod(s);
		if (s=="<="){
			s="<";
			++x;
		}
		else if (s==">="){
			s=">";
			--x;
		}
		if (s=="<")
			kam.push_back(x);
		else
			bish.push_back(x);
	}
	sort(kam.begin(),kam.end());
	sort(bish.begin(),bish.end(),cmp);
	if (kam.size()==0){
		cout << bish[0]+1;
		return 0;
	}
	if (bish.size()==0){
		cout << kam[0]-1;
		return 0;
	}
	if (kam[0]-bish[0]<=1)
		cout << "Impossible";
	else
		cout << bish[0]+1;
}