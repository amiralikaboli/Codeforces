#include <bits/stdc++.h>

using namespace std;

const int MaxN=300+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<min(a[0],a[1]);++i)
		cout << "PRPL";
	if (a[0]>a[1]){
		for (int i=0;i<a[0]-a[1];++i)
			cout << "PRL";
		cout << "R";
	}
	else{
		for (int i=0;i<a[1]-a[0];++i)
			cout << "RPL";
		cout << "R";
	}
	for (int i=2;i<n;++i){
		cout << "R";
		for (int j=0;j<a[i];++j)
			cout << "PLR"; 
	}
}