#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	for (int i=0;i<=a;++i)
		if (i<=b && (a-i)<=c && b-i==c-a+i){
			cout << i << " " << b-i << " " << a-i;
			return 0;
		}
	cout << "Impossible";
}