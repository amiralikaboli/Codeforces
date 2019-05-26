#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

const int MaxN=1E3+10;
bool b[MaxN];

int main() {
	int n,k;
	fin >> n >> k;
	--k;
	for (int i=0;i<n;++i)
		fin >> b[i];
	int ind=k;
	while (b[ind]==false){
		++ind;
		ind%=n;
	}
	fout << ind+1;
}