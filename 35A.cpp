#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

bool x[5];

int main(){
	int p;
	fin >> p;
	x[p]=true;
	for (int i=0;i<3;++i){
		int a,b;
		fin >> a >> b;
		swap(x[a],x[b]);
	}
	for (int i=1;i<=3;++i)
		if (x[i]==true)
			fout << i;
}