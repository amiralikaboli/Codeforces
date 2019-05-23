#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ind=0;
	for (int i=1;i<n;++i){
		ind+=i;
		ind%=n;
		cout << ind+1 << " ";
	}
}