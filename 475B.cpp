#include <bits/stdc++.h>

using namespace std;

const int MaxN=20+10;
const int MaxM=20+10;
int ls,lt;
string s,t;
bool mark[MaxN][MaxM];
	
void dfs(int x,int y){
	if (x<0 || x>=ls)
		return;
	if (y<0 || y>=lt)
		return;
	if (mark[x][y]==false){
		mark[x][y]=true;
		if (s[x]=='<')
			dfs(x,y-1);
		else if (s[x]=='>')
			dfs(x,y+1);
		if (t[y]=='^')
			dfs(x-1,y);
		else if (t[y]=='v')
			dfs(x+1,y);
	}
}

int main(){
	cin >> ls >> lt;
	cin >> s >> t;
	bool ans=true;
	for (int i=0;i<ls;++i)
		for (int j=0;j<lt;++j){
			memset(mark,0,sizeof mark);
			dfs(i,j);
			for (int x=0;x<ls;++x)
				for (int y=0;y<lt;++y)
					if (mark[x][y]==false)
						ans=false;
		}
	cout << (ans==true ? "YES" : "NO");
}