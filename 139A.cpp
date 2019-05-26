#include <iostream>

using namespace std;

int a[10];

int main(){
	int n;
	cin >> n;
	for (int i=1;i<=7;++i)
		cin >> a[i%7];
	for (int i=1; ;++i){
		n-=a[i%7];
		if (n<=0){
			if (i%7==0){
				cout << 7;
				return 0;
			}
			cout << i%7;
			return 0;
		}
	}
}