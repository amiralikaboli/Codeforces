#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
bool mark[MaxN];

int main(){
	string s;
	cin >> s;
	int x=0;
	for (int i=0;i<s.size();++i){
		if (s[i]==','){
			mark[x]=true;
			x=0;
		}
		else{
			x*=10;
			x+=s[i]-'0';
		}
	}
	mark[x]=true;
	bool isFirst=true;
	for (int i=1;i<MaxN;++i)
		if (mark[i]==true){
			int ind=i;
			while (mark[ind]==true)
				++ind;
			--ind;
			if (isFirst==false)
				cout << ',';
			if (ind==i)
				cout << i;
			else
				cout << i << '-' << ind;
			i=ind;
			isFirst=false;
		}
}