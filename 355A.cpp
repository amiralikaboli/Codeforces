#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,d;
	cin >> k >> d;
	if (k>1 && d==0){
		cout << "No solution";
		return 0;
	}
	if (k>=d){
		for (int i=0;i<d;++i)
			cout << 1;
		for (int i=0;i<k-d;++i)
			cout << 0;
	}
	else{
		int x=d%k;
		int t=d/k;
		for (int i=0;i<x;++i)
			cout << t+1;
		for (int i=0;i<k-x;++i)
			cout << t;
	}
}