#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main(){
	int q;
	fin >> q;
	for (int i=0;i<q;++i){
		int n;
		fin >> n;
		fout << (n%2 ? 0 : 1) << " ";
	}
}