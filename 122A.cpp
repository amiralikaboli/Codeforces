#include <iostream>

using namespace std;

int d[20]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};

void lucky(int n){
	for (int i=0;i<14;++i)
		if (n%d[i]==0){
			cout << "YES";
			return;
		}
	cout << "NO";
}

int main (){
	int n;
	cin >> n;
	lucky(n);
}