#include <bits/stdc++.h>

using namespace std;

bool adj[10][10];

int main(){
	for(int i=0;i<3;++i){
		string s;
		cin >> s;
		int u=s[0]-'A';
		int v=s[2]-'A';
		if(s[1]=='>'){
			adj[u][v]=true;
			adj[v][u]=false;
		}
		else{
			adj[u][v]=false;
			adj[v][u]=true;
		}
	}
	int per[5]={0,1,2};
	for (int i=0;i<6;++i){
		if (adj[per[1]][per[0]]==true && adj[per[2]][per[1]]==true && adj[per[0]][per[2]]==false){
			cout << char('A'+per[0]) << char('A'+per[1]) << char('A'+per[2]);
			return 0;
		}
		next_permutation(per,per+3);
	}
	cout << "Impossible";
}