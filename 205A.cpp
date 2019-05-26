#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int mn=1E9+7;
	int t=1;
	int ind=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (x<mn){
			mn=x;
			t=1;
			ind=i;
		}
		else if (x==mn)
			++t;
	}
	if (t==1)
		cout << ind+1;
	else
		cout << "Still Rozdil";
}