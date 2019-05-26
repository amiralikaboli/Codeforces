#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n,k;
	fin >> n >> k;
	int ans=0;
	for (int i=0;i<n;++i){
		fin >> a[i];
		ans+=a[i];
	}
	for (int i=0;i<n;++i)
		ans-=k*min(3,a[i]/k);
	fout << ans;
}