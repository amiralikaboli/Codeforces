#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int l=1;
	int r=n;
	for (int i=0;i<n;++i)
		if (i%2==0){
			cout << l << " ";
			++l;
		}
		else{
			cout << r << " ";
			--r;
		}
}