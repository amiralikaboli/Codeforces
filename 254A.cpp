#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

const int MaxAi=5E3+10;
vector <int> t[MaxAi];

int main(){
	ios::sync_with_stdio(false);
	int n;
	fin >> n;
	for (int i=0;i<2*n;++i){
		int x;
		fin >> x;
		t[x].push_back(i+1);
	}
	for (int i=0;i<MaxAi;++i)
		if (t[i].size()%2){
			fout << -1;
			return 0;
		}
	for (int i=0;i<MaxAi;++i)
		for (int j=0;j<t[i].size();j+=2)
			fout << t[i][j] << " " << t[i][j+1] << '\n';
}