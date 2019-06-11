#include <iostream>

using namespace std;

int a[5];

int main (){
	int n,sum=0;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++a[x/100];
	}
	sum=a[1]+2*a[2];
	if (sum%2){
		cout << "NO";
		return 0;
	}
	int t=sum/2;
	t-=min(t/2*2,a[2]*2);
	if (a[1]<t){
		cout << "NO";
		return 0;
	}
	cout << "YES";
}