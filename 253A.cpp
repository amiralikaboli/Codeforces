#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main(){
	int n,m;
	fin >> n >> m;
	if (n<=m){
		for (int i=0;i<n;++i)
			fout << "GB";
		for (int i=0;i<m-n;++i)
			fout << "G";
	}
	else{
		for (int i=0;i<m;++i)
			fout << "BG";
		for (int i=0;i<n-m;++i)
			fout << "B";
	}
} 