#include <iostream>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n,d;
	int s=0;
	cin >> n >> d;
	for (int i=0;i<n;++i){
		cin >> a[i];
		s+=a[i];
	}
	s+=(n-1)*10;
	if (s>d){
		cout << -1;
		return 0;
	}
	cout << (d-s)/5+2*(n-1);
}