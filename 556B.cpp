#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int t=0;t<n;++t){
		for (int i=0;i<n;++i){
			if (i%2==0){
				++a[i];
				a[i]%=n;
			}
			else if (i%2==1){
				--a[i];
				a[i]+=n;
				a[i]%=n;
			}
		}
		bool b=true;
		for (int i=0;i<n;++i)
			if (a[i]!=i)
				b=false;
		if (b==true){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}