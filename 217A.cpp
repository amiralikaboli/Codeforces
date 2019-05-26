#include <iostream>

using namespace std;

const int MaxN=100+10;
int n;
bool mark[MaxN];
int Ox[MaxN],Oy[MaxN];

void dfs(int root){
	mark[root]=true;
	for (int i=0;i<n;++i)
		if (mark[i]==false && (Ox[i]==Ox[root] || Oy[i]==Oy[root]))
			dfs(i);
}

int main(){
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> Ox[i] >> Oy[i];
	int ans=0;
	for (int i=0;i<n;++i)
		if (mark[i]==false){
			dfs(i);
			++ans;
		}
	cout << --ans;
}