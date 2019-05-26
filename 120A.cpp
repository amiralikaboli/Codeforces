#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main(){
	int a;
	string s;
	fin >> s >> a;
	if (s=="front"){
		if (a==1)
			fout << 'L';
		else
			fout << 'R';
	}
	if (s=="back"){
		if (a==1)
			fout << 'R';
		else
			fout << 'L';
	}
}