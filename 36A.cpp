#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");	

vector <int> ind;

int main(){
	int l;
	fin >> l;
	string s;
	fin >> s;
	for (int i=0;i<s.size();++i)
		if (s[i]=='1')
			ind.push_back(i);
	if (ind.size()<=2){
		fout << "YES";
		return 0;
	}
	int x=ind[1]-ind[0];
	for (int i=2;i<ind.size();++i)
		if (ind[i]-ind[i-1]!=x){
			fout << "NO";
			return 0;
		}
	fout << "YES";
}