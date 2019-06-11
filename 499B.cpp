#include <iostream>

using namespace std;

const int MaxN=3E3+10;
string a[MaxN],b[MaxN],c[MaxN];

int main(){
	int n,k;
	cin >> k >> n;
	for (int i=0;i<n;++i)
		cin >> a[i] >> b[i];
	for (int i=0;i<k;++i){
		cin >> c[i];
		for (int j=0;j<n;++j)
			if (c[i]==a[j]){
				if (a[j].size()<=b[j].size())
					cout << a[j] << " ";
				else if (a[j].size()>b[j].size())
					cout << b[j] << " ";
			}
	}
}