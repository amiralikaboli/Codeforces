#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
bool kind[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> kind[i];
	for (int i=1;i<=n/3;++i)
		if (n%i==0)
			for (int j=0;j<i;++j){
				bool b=true;
				for (int l=j;l<n;l+=i)
					b&=kind[l];
				if (b){
					cout << "YES";
					return 0;
				}
			} 
	cout << "NO";
}