#include <bits/stdc++.h>

using namespace std;

int main(){
	long long k,l;
	cin >> k >> l;
	long long cnt=k;
	long long ind=0;
	while (cnt<l){
		cnt*=k;
		++ind;
	}
	if (cnt!=l)
		cout << "NO";
	else{
		cout << "YES\n";
		cout << ind;
	}
}