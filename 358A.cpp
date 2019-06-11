#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n-1;++i)
		for (int j=0;j<n-1;++j){
			if (a[i]<a[j] && a[j]<a[i+1] && a[i+1]<a[j+1]){
				cout << "yes";
				return 0;
			}
			if (a[i]<a[j+1] && a[j+1]<a[i+1] && a[i+1]<a[j]){
				cout << "yes";
				return 0;
			}
			if (a[i+1]<a[j] && a[j]<a[i] && a[i]<a[j+1]){
				cout << "yes";
				return 0;
			}
			if (a[i+1]<a[j+1] && a[j+1]<a[i] && a[i]<a[j]){
				cout << "yes";
				return 0;
			}
		}
	cout << "no";
}